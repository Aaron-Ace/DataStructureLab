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
#include<algorithm>

using namespace std;

class ID_SCore
{
    public:
        int ID;
        int score;

};

bool CompareFunction_score( ID_SCore const &a, ID_SCore const &b)
{
    return a.score < b.score;
}

bool CompareFunction_ID( ID_SCore const &a, ID_SCore const &b)
{
    return a.ID < b.ID;
}

int main()
{
    int NumOfScore;
    while(cin>>NumOfScore)
    {
        ID_SCore data[100];
        for(int i=0;i<NumOfScore;i++)
        {
            cin>>data[i].ID>>data[i].score;
        }
        sort(data,data+NumOfScore,CompareFunction_ID);
        sort(data,data+NumOfScore,CompareFunction_score);
        for(int i=0;i<NumOfScore;i++)
        {
            cout<<data[i].ID<<" "<<data[i].score<<endl;
        }

    }
}

