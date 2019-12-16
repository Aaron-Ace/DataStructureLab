#include <iostream>

//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|---0908-226-963-----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|

using namespace std;

int main()
{
    int N,M;

    while(cin>>N>>M)
    {
        int book[200]={0};
        int input_order[200];

        for(int i=1;i<=N;i++)
        {
            int temp;
            cin>>temp;
            book[temp] += 1;
            input_order[i] = temp;
        }
        for(int i=1;i<=N;i++)
        {
            if(book[input_order[i]]>1)
            {cout<<book[input_order[i]]-1<<endl;}
            else
            {cout<<"BeiJu"<<endl;}
        }
    }
    return 0;
}


