//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|----0908-226-963----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|


#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

class RecordPoition
{
public:
    int row;
    int column;
    int value;
};

int main()
{
    int input_row,input_col;
    while(cin>>input_row>>input_col)
    {
        RecordPoition recordposition[10000];
        int count =0;

        for(int i=1;i<=input_row;i++)
        {
          for(int j=1;j<=input_col;j++)
          {
              int temp;
              cin>>temp;
              if(temp!=0)
              {
                  recordposition[count].column = j;
                  recordposition[count].row = i;
                  recordposition[count].value = temp;
                  count+=1;
              }
          }
        }

        /*for(int i=0;i<count;i++)
        {
            cout<<"("<<recordposition[i].column<<","<<recordposition[i].row<<","<<recordposition[i].value<<")"<<endl;
        }*/
        //cout<<endl<<endl;

        for(int i=1;i<=input_col;i++)
        {
          for(int j=1;j<=input_row;j++)
          {
              int flag = 0;
              for(int k=0;k<count;k++)
              {

                  if(i==recordposition[k].column && j==recordposition[k].row)
                  {
                      cout<<recordposition[k].value<<" ";
                      flag = 1;
                  }
              }
              if(flag==0){cout<<"0 ";}
          }
          cout<<endl;
        }
    }
}
