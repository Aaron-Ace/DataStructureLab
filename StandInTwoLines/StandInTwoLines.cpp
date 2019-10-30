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
        int count_temp=0;
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

        if(count_odd>=2*count_even){temp = 2*count_even;}
        else{temp = count_odd;}

        for(int i=1;i<=temp;i++)
        {
            cout<<array_odd[i-1]<<" ";

            if(i%2==0 && count_temp != count_even)
            {
                cout<<array_even[count_temp]<<" ";
                count_temp +=1;
            }

        }

        for(int i=temp;i<count_odd;i++)
        {
            cout<<array_odd[i]<<" ";
        }

        for(int i=temp/2;i<count_even;i++)
        {
            cout<<array_even[i]<<" ";
        }
        cout<<endl;
    }
}
//8 2 1 3 9 4 11 14 16
//8 2 1 3 9 4 11 13 15


