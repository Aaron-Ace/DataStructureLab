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

float int2str(string num){
    float res;
    stringstream stream(num);
    stream>>res;
    return res;
}

bool cmpf(Polynomial const &a, Polynomial const &b)
{
    return a.pow > b.pow;
}

int main()
{
    string input_A,input_B,temp;
    while(getline(cin,input_A))
    {

        Polynomial polynomial_a[1000];
        Polynomial polynomial_b[1000];
        Polynomial polynomial_c[1000];
        stringstream ss_A,ss_B;

        //cout<<"Cpoy:"<<input_A<<endl;
        getline(cin,input_B);
        //cout<<"Cpoy:"<<input_B<<endl;
        ss_A<<input_A;
        int level_A=0;
        while(ss_A>>input_A)
        {
            //cout<<input_A<<endl;
            polynomial_a[level_A].coefficient = int2str(input_A) ;
            ss_A>>input_A;
            polynomial_a[level_A].pow = int2str(input_A);
            level_A += 1;
        }
        //cout<<"level_A:"<<level_A<<endl;
        ss_B<<input_B;
        int level_B=0;
        while(ss_B>>input_B)
        {
            polynomial_b[level_B].coefficient = int2str(input_B);
            ss_B>>input_B;
            polynomial_b[level_B].pow = int2str(input_B);
            level_B += 1;
        }
        //cout<<"level_B:"<<level_B<<endl;

        int level_C =0;

        for(int i=0;i<level_A;i++)
        {
            int flag =0;
            for(int j=0;j<level_B;j++)
            {
                if(polynomial_a[i].pow==polynomial_b[j].pow)
                {
                    polynomial_c[level_C].coefficient = polynomial_a[i].coefficient + polynomial_b[j].coefficient;
                    polynomial_c[level_C].pow = polynomial_a[i].pow;
                    level_C += 1;
                    flag =1;
                }
            }
            if(flag==0)
            {
                polynomial_c[level_C].coefficient = polynomial_a[i].coefficient;
                polynomial_c[level_C].pow = polynomial_a[i].pow;
                level_C += 1;
            }

        }

        for(int i=0;i<level_B;i++)
        {
            int flag =0;
            for(int j=0;j<level_C;j++)
            {
                if(polynomial_b[i].pow==polynomial_c[j].pow)
                {
                    flag =1;
                }
            }
            if(flag==0)
            {
                polynomial_c[level_C].coefficient = polynomial_b[i].coefficient;
                polynomial_c[level_C].pow = polynomial_b[i].pow;
                level_C += 1;
            }

        }

        sort(polynomial_c,polynomial_c+level_C,cmpf);

        for(int i=0;i<level_C;i++)
        {
            cout<<polynomial_c[i].coefficient<<" "<<polynomial_c[i].pow<<" ";
        }
        cout<<endl;
    }
    return 0;
}
