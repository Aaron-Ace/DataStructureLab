
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

int arithmetic(char op, int a, int b){
    if (op == '+')
        return a+b;
    else if (op == '-')
        return a-b;
    else if (op == '*')
        return a*b;
    return a/b;
}

int main()
{
    int flag=0;
    string Formula;
    int LengthOfFormula;
    getline(cin,Formula);
    while(Formula.length()>=3)
    {
        if((Formula[2]=='+' || Formula[2]=='*' || Formula[2]=='-' || Formula[2]=='/') && '0'<=Formula[0]<='9' && '0'<=Formula[1]<='9')
        {
            Formula[0] = arithmetic(Formula[2],Formula[0],Formula[1]);
            Formula[1] = "";
            Formula[2] = "";
        }
        else{flag =1;}

    }
    if(flag ==0){cout<<Formula<<endl;}
    else{cout<<"input Error"<<endl;}

}
