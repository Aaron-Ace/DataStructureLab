#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

class stack
{
    public:
        unsigned int maxTop;
        int top;
        int *data;
};

void create(stack *st){
    st->maxTop=14;
    st->top=-1;
    st->data=(int *)malloc(sizeof(int));
}

void push(stack *st, int num){
    st->data[++st->top]=num;
}

int stack_size(stack *st){
    return (st->top)+1;
}

int pop(stack *st){
    return st->data[st->top--];
}

int arithmetic(char op, int a, int b){
    if (op == '+')
        return a+b;
    else if (op == '-')
        return a-b;
    else if (op == '*')
        return a*b;
    return a/b;
}

int main(){
    stack *s=(stack*)malloc(sizeof(stack));
    char string[100];
    int i;
    while(cin>>string){
        create(s);
        int flag=1;
        for (i=0; i<strlen(string); i++){
            if (isalnum(string[i]) != 0)
                push(s, string[i]-'0');
            else{
                if (stack_size(s) < 2){
                    flag=0;
                    break;
                }
                else
                    push(s, arithmetic(string[i], pop(s), pop(s)));
            }
        }
        if (flag == 0 || stack_size(s)>1)
            cout<<"Input Error"<<endl;
        else
            cout<<pop(s)<<endl;
    }
    return 0;
}
