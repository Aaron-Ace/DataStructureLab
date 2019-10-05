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

int main()
{
    int NumOfInput ;
    while(cin>>NumOfInput)
    {
        int temp;
        int count_even =0;
        int count_odd  =0;
        int array_odd[100] ={0};
        int array_even[100]={0};
        for(int i=0;i<NumOfInput;i++)
        {
            cin>>temp;
            //cout<<"temp:"<<temp;
            if(temp%2!=0)
            {
                //cout<<"odd"<<endl;
                array_odd[count_odd] = temp;
                count_odd += 1;
                //cout<<array_odd[count_odd]<<count_odd<<endl;
            }
            else if(temp%2==0)
            {
                //cout<<"even"<<endl;
                array_even[count_even] = temp;
                count_even += 1;
                //cout<<array_even[count_even]<<count_even<<endl;
            }
        }
        for(int i=1;i<=count_odd;i++)
        {
            cout<<array_odd[i-1]<<" ";
            int count_temp=0;
            if(i%2==0 && i<= count_even)
            {
                cout<<array_even[count_temp]<<" ";
                count_temp +=1;
            }
        }
        cout<<endl;
    }
}
