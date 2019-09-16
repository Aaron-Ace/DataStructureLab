//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|---0908-226-963-----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|

#include<iostream>

using namespace std;

int main()
{
    int TestCase;
    int Case=0;
    while(cin>>TestCase)
    {
        if(TestCase==0){break;}
        Case += 1;

        int Sum=0;
        int Avg;
        int NumOfArray[50];
        int count =0;

        for(int i=0;i<TestCase;i++)
        {
            cin>>NumOfArray[i];
            Sum += NumOfArray[i];
        }

        Avg = Sum/TestCase;

        for(int i=0;i<TestCase;i++)
        {
            if(NumOfArray[i] > Avg)
            {
                count += NumOfArray[i] - Avg;
            }
        }

        cout<<"Set #"<<Case<<endl;
        cout<<"The minimum number of moves is "<<count<<"."<<endl;

    }
}
