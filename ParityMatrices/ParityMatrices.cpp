#include<iostream>

using namespace std;

int Sum_Row[1000];
int Sum_Col[1000];

int Odd_Row=0;
int Odd_Col=0;

void GetSum(int matrix)
{

    int temp;
    for(int i=1;i<=matrix;i++)
    {
        for(int j=1;j<=matrix;j++)
        {
            cin>>temp;
            Sum_Row[i]+=temp;
            Sum_Col[j]+=temp;
        }
    }
}

void HowManyOddSum(int matrix)
{
    for(int i=1;i<=matrix;i++)
    {
        if(Sum_Row[i]%2 != 0){Odd_Row+=1;}
        if(Sum_Col[i]%2 != 0){Odd_Col+=1;}
    }
}

void GetChangeBitPosition(int matrix)
{
    int y;
    int x;
    if(Odd_Row == 0 && Odd_Col==0){cout<<"OK"<<endl;}
    else if(Odd_Row == 1 && Odd_Col==1)
    {
        for(int i=1;i<=matrix;i++)
        {
            if(Sum_Row[i]%2 != 0){ x = i;}
            if(Sum_Col[i]%2 != 0){ y = i;}
        }
        cout<<"Change bit ("<<x<<","<<y<<")"<<endl;
    }
    else{cout<<"Corrupt"<<endl;}

}


int main()
{

    int matrix;

    while(cin>>matrix)
    {
        if(matrix == 0){break;}
        GetSum(matrix);
        HowManyOddSum(matrix);
        GetChangeBitPosition(matrix);


    }

}
