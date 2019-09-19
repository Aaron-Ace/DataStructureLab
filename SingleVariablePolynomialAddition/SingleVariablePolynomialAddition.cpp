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

class Polynomial
{
    public:
        int coefficient;
        int pow;
};

int main()
{
    Polynomial polynomial[1000];
    string input;
    stringstream ss;
    int array_coefficient[1000]={0};
    while(getline(cin,input))
    {
        ss<<input;
        int level=0;
        while(ss)
        {
            cin>>polynomial[level].coefficient;
            cin>>polynomial[level].pow;
            level += 1;
        }
        getline(cin,input);
        ss<<input;
        while(ss)
        {
            cin>>polynomial[level].coefficient;
            cin>>polynomial[level].pow;
            level += 1;
        }

        for(int i=0;i<=level;i++)
        {
            array_coefficient[polynomial[i].pow+1] += polynomial[i].coefficient;
        }
        for(int i=1;i<=1000;i++)
        {
            if(array_coefficient[i] != 0)
            {
                cout<<array_coefficient[i]<<" "<<i;
            }
        }
        cout<<endl;


    }
}
