//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|----0908-226-963----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|

#include <iostream>

using namespace std;

int top=-1;

class stackss
{
    public:

        int stacks[100];
        int isempty()
        {
            if(top==-1){return 1;}
            else{return 0;}
        }
        void push(int data)
        {
                top++;
                stacks[top]=data;
        }
        int pop()
        {
            int data;
            data=stacks[top];
            top--;
            return data;
        }
};

int main()
{
    string input ;
    while(cin>>input)
    {
        top=-1;
        int length_input;
        int num;
        int a,b;
        length_input = input.length();
        stackss st;
        int flag =0;
        for(int j=0; j<length_input; j++)
        {
            if (input[j]=='+')
            {
                a=st.stacks[top];
                st.pop();
                if(!st.isempty())
                {
                    b=st.stacks[top];
                    st.pop();
                    st.push(a+b);
                }
                else
                {
                    flag +=1;
                    //goto Ans;
                }

            }
            else if (input[j]=='-')
            {
                a=st.stacks[top];
                st.pop();
                if(!st.isempty())
                {
                    b=st.stacks[top];
                    st.pop();
                    st.push(b-a);
                }
                else
                {
                    flag +=1;
                    //goto Ans;
                }
            }
            else if (input[j]=='*')
            {
                a=st.stacks[top];
                st.pop();
                if(!st.isempty())
                {
                    b=st.stacks[top];
                    st.pop();
                    st.push(a*b);
                }
                else
                {
                    flag +=1;
                    //goto Ans;
                }
            }
            else if (input[j]=='/')
            {
                a=st.stacks[top];
                st.pop();
                if(!st.isempty())
                {
                    b=st.stacks[top];
                    st.pop();
                    st.push(b/a);
                }
                else
                {
                    flag +=1;
                    //goto Ans;
                }
            }
            else
            {
                num=input[j]-'0';
                st.push(num);
            }
        }

//Ans:
        if(flag!=0)
        {
            cout<<"Input Error"<<endl;
        }
        else
        {
            a=st.stacks[top];
            cout <<a<<endl;
        }

    }
    return 0;
}

