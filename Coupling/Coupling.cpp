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
        string string_input;
        cin>>string_input;
        int length_input;
        int count_ans=0;
        int count_B=0,count_G=0;
        length_input = string_input.length();
        for(int i=0;i<length_input;i++)
        {
            if(string_input[i]=='B')
            {
                count_B+=1;
            }
            else if(string_input[i]=='G')
            {
                if(count_B>0){count_ans+=1;count_B-=1;}
            }
        }
        cout<<count_ans<<endl;
    }

}
