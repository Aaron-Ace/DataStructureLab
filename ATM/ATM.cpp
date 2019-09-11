#include<iostream>
#include<string>

using namespace std;

char passwd[12];
int balance;
int login = 1;

void Action(int x)
{
    switch(x)
    {
        case 1:
            char pwd[12];
            cin>>pwd;
            if(pwd == passwd){cout<<"Login successfully!"<<endl;}
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
        login =1 ;
        while(cin>>action)
        {
           if(action==0){break;}
           else if(login == 0 || action == 1)
           {

               Action(action);
           }
           else{cout<<"Please login first"<<endl;}

        }
    }
}
