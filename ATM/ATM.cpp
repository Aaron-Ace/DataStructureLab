#include<iostream>
#include<string>

using namespace std;

char passwd[12];
int balance;
int whetherLogin = 1;

bool CheckPasswd(char pwd[])
{
    int len_passwd=0;
    for(int j=0; passwd[j]; ++j){len_passwd++;}
    int len_pwd = 0;
    for(int j=0; pwd[j]; ++j){len_pwd++;}

    //cout<<"1."<<len_passwd<<endl;
    //cout<<"2."<<len_pwd<<endl;

    if(len_passwd == len_pwd)
    {
        for(int i=0;i<len_passwd;i++)
        {
            int flag = 0;
            if(passwd[i] != pwd[i]){flag = 1;}
            if(flag == 0){return true;}
            else{return false;}
        }
    }
    else{return false;}
}

void Action(int x)
{
    switch(x)
    {
        case 1:
            char pwd[12];
            cin>>pwd;
            if(CheckPasswd(pwd) == true){cout<<"Login successfully!"<<endl;whetherLogin = 0;}
            else{cout<<"Password is incorrect"<<endl;}
            break;
        case 2:
            int withdraw;
            cin>>withdraw;
            if(withdraw>balance){cout<<"Insufficient balance."<<endl;}
            else{balance -= withdraw ;}
            break;
        case 3:
            int deposit;
            cin>>deposit;
            balance += deposit;
            break;
        case 4:
            cout<<balance<<endl;
            break;
        default:
            cout<<"Please enter the number btween 0 and 4"<<endl;
            break;
    }
}

int main()
{
    int action;
    while(cin>>passwd>>balance)
    {
        whetherLogin = 1;
        while(cin>>action)
        {
           if(action==0){break;}
           else if(action == 1 || whetherLogin == 0)
           {
               Action(action);
           }
           else{cout<<"Login First"<<endl;}
        }
    }
}
