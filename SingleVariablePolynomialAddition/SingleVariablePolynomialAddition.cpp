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
        float coefficient;
        int pow;
};

bool compare(Polynomial a, Polynomial b)
{
	return a.pow > b.pow;
}

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
            int flag = 0;
            for(int i=0 ;i<level;i++)
            {
                if(polynomial[i].pow==polynomial[level].pow)
                {
                    polynomial[i].coefficient += polynomial[level].coefficient;
                    polynomial[level].coefficient = 0;
                    polynomial[level].pow = 0;
                    flag += 1;
                }
            }
            if(flag==0)
            {
                level+=1;
            }
        }

        sort(polynomial[0].pow,polynomial[0+level].pow,compare);

        for(int i=0;i<level;i++)
        {
           cout<< polynomial[0].pow ;
        }
        cout<<endl;


    }
}
