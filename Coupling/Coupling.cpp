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

int main()
{
    int NumOfLoop;
    cin>>NumOfLoop;
    for(int j=0;j<NumOfLoop;j++)
    {
        char input[256]={0};
        cin>>input;
        //cout<<input;
        int length_input;
        int count_ans=0;
        int count_B=0;
        for(int i=0;i<256;i++)
        {
            if(input[i]=='B')
            {
                count_B+=1;
            }
            else if(input[i]=='G')
            {
                if(count_B>0){count_ans+=1;count_B-=1;}
            }
        }
        cout<<count_ans<<endl;
    }

}
