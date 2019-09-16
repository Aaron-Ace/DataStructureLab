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

using namespace std;

class DataBaseStruture
{
    public:
        int ID;
        string Name;
        string Gender;
        int Age;
};

int main()
{

    int data;

    while(cin>>data)
    {
        DataBaseStruture database[1000]={0};

        for(int i=0;i<data;i++)
        {
            cin>>database[i].ID;
            cin>>database[i].Name;
            cin>>database[i].Gender;
            cin>>database[i].Age;
        }

        int NumOfSearch;
        cin>>NumOfSearch;

        for(int i=0;i<NumOfSearch;i++)
        {
            int flag = 1;
            int SearchID;
            cin>>SearchID;
            for(int j=0;j<data;j++)
            {
              if(SearchID == database[j].ID)
              {
                  cout<<database[j].ID<<" "<<database[j].Name<<" "<<database[j].Gender<<" "<<database[j].Age<<endl;
                  flag = 0;
                  break;
              }

            }
            if(flag == 1){cout<<"No Answer!"<<endl;}
        }
    }
}
