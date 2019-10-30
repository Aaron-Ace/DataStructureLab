//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|----0908-226-963----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|

#include <iostream>
#include <sstream>
#include <stack>
using namespace std;


int main()
{
    string input ;
    while(cin>>input)
    {
        int length_input;
        long long int num;
        long long int a,b;
        length_input = input.length();
        stack<long long int> st;
        int flag =0;
        for(int j=0; j<length_input; j++)
        {
            if (input[j]=='+')
            {
                a=st.top();
                st.pop();
                if(!st.empty())
                {
                    b=st.top();
                    st.pop();
                    st.push(a+b);
                }
                else{flag +=1; goto Ans;}

            }
            else if (input[j]=='-')
            {
                a=st.top();
                st.pop();
                if(!st.empty())
                {
                    b=st.top();
                    st.pop();
                    st.push(b-a);
                }
                else{flag +=1; goto Ans;}
            }
            else if (input[j]=='*')
            {
                a=st.top();
                st.pop();
                if(!st.empty())
                {
                    b=st.top();
                    st.pop();
                    st.push(a*b);
                }
                else{flag +=1; goto Ans;}
            }
            else if (input[j]=='/')
            {
                a=st.top();
                st.pop();
                if(!st.empty())
                {
                    b=st.top();
                    st.pop();
                    st.push(b/a);
                }
                else{flag +=1; goto Ans;}
            }
            else
            {
                num=input[j]-'0';
                st.push(num);
            }
        }

        Ans:
        if(flag!=0)
        {
            cout<<"Input Error"<<endl;
        }
        else
        {
            a=st.top();
            cout <<a<<endl;
        }

    }
    return 0;
}

