#include<iostream>

using namespace std;

int main()
{
    int TestCase;
    cin>>TestCase;
    for(int i=0;i<TestCase;i++)
    {
        int Ans=1;
        int num;
        int temp;
        cin>>num;
        for(int j=0;j<num;j++)
        {

           cin>>temp;
           Ans *= temp;
        }
        cout<<Ans<<endl;
    }
    return 0;

}
