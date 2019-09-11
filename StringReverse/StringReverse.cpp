#include<iostream>

using namespace std;

/*int main()
{
    int TestCase;
    cin>>TestCase;
    for(int i=0;i<TestCase;i++)
    {
        string input;
        cin>>input;
        //cout<<input;
        int StrLenth;
        StrLenth = input.length();
        for(int j=StrLenth-1;j>=0;j--)
        {
            cout<<input[j];
        }
        cout<<endl;

    }
    return 0;

}*/

int main()
{
    char str[50];
    int TestCase=0;
    cin>>TestCase;
    cin.getline(str,50);
    for(int i=0;i<TestCase;i++)
    {
       cin.getline(str,50);
       int len=0;
       for(int j=0; str[j]; ++j){len++;}

       /*for(int k=0; k < len/2; ++k)
        {
             str[len] = str[k];
             str[k] = str[len-k-1];
             str[len-k-1] = str[len];
             str[len] = '\0';
        }*/
        for(int z=len-1;z>=0;z--)
        {cout<<str[z];}
        if(i != TestCase-1){cout<<endl;}



    }
    return 0;


}

