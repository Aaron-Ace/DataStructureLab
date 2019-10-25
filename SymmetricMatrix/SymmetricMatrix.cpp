//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|---0908-226-963-----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|

#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    int array[100][100];
    while (cin>>n)
    {
        int i, j, k=0;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                cin>>array[i][j] ;
            }

        }


        if (n == 1){cout<<"Yes!"<<endl;}
        else
        {
            for (i=0; i<n; i++)
            {
                for (j=0; j<n; j++)
                {
                    if(array[i][j] != array[j][i])
                    {
                        k=1;break;
                    }
                }

            }
            if (k == 0){cout<<"Yes!"<<endl;}
            else{cout<<"No!"<<endl;}
        }
    }
    return 0;
}
