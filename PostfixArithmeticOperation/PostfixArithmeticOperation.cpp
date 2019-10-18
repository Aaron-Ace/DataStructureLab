//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|----0908-226-963----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|

/*
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

int arithmetic(char op, char a, char b){
    if (op == '+')
        return (a-'0')+(b-'0');
    else if (op == '-')
        return (a-'0')-(b-'0');
    else if (op == '*')
        return (a-'0')*(b-'0');
    else
        return (a-'0')/(b-'0');
}

int main()
{
    int flag=0;
    string Formula;

    cout<<"Test: "<<3+5*8-4/4<<endl;
    while(getline(cin,Formula))
    {
        int LengthOfFormula;
        cout<<Formula<<endl;
        LengthOfFormula = Formula.length();
        for(int i=0;i<LengthOfFormula;i++)
        {
            if((Formula[i]=='+' || Formula[i]=='-' || Formula[i]=='*' || Formula[i]=='/') && i>=2)
            {
                Formula[i]=arithmetic(Formula[i],Formula[i-2],Formula[i-1])+'0';
                Formula[i-1] = '0'-16;
                Formula[i-2] = '0'-16;
                cout<<Formula<<endl;
            }
        }
    }

}
*/

#include <bits/stdc++.h>
#include <sstream>
using namespace std;

bool isOperand(char x)
{
   return (x >= '0' && x <= '9');
}


string getInfix(string exp)
{
    stack<string> s;

    for (int i=0; exp[i]!='\0'; i++)
    {
        // Push operands
        if (isOperand(exp[i]))
        {
           string op(1, exp[i]);
           s.push(op);
        }

        // We assume that input is
        // a valid postfix and expect
        // an operator.
        else
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op2 + exp[i] +
                   op1 + ")");
        }
    }

    // There must be a single element
    // in stack now which is the required
    // infix.
    return s.top();
}

// Driver code
int main()
{
    string exp ;
    cin>>exp;
    cout << getInfix(exp)<<endl;
    return 0;
}

