#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int sizeofarray;
    int input;
    int count =0;
    int array[101]={0};
    int array_print[100]={0};
    cin>>sizeofarray>>input;
    for(int i=0;i<input;i++)
    {
        int temp,temp1;
        cin>>temp>>temp1;
        array[temp1]=1;
    }
    for(int i=1;i<=sizeofarray;i++)
    {
        if(array[i]==0)
        {
            count+=1;
            array_print[count]=i+1;
        }
    }
    sort(array_print,array_print+count);
    cout<<count<<endl;
    for(int i=1;i<=count;i++)
    {
        cout<<array_print[i]-1<<" ";
    }
    cout<<endl;


}
