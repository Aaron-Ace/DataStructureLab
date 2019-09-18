//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|----0908-226-963----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|


#include<iostream>
#include<string>

using namespace std;

bool CheckID(char SearchID[],char ID[])
{
    int len_searchID = 0;
    for(int j=0; SearchID[j]; ++j){len_searchID++;}
    int len_ID = 0;
    for(int j=0; ID[j]; ++j){len_ID++;}

    //cout<<"1."<<len_searchID<<endl;
    //cout<<"2."<<len_ID<<endl;

    if(len_searchID == len_ID)
    {
        int flag = 0;
        for(int i=0;i<len_ID;i++)
        {

            if(SearchID[i] != ID[i]){flag = 1;}
            //cout<<"SearchID:"<<SearchID[i]<<endl;
            //cout<<"ID:"<<ID[i]<<endl;
        }
        if(flag == 0){return true;}
        else{return false;}
    }
    else{return false;}
}

class DataBaseStruture
{
    public:
        char ID[100];
        string Name;
        string Gender;
        int Age;
};

int main()
{

    int data;

    while(cin>>data)
    {
        DataBaseStruture database[1000]={0};

        for(int i=0;i<data;i++)
        {
            cin>>database[i].ID;
            cin>>database[i].Name;
            cin>>database[i].Gender;
            cin>>database[i].Age;
        }

        int NumOfSearch;
        cin>>NumOfSearch;

        for(int i=0;i<NumOfSearch;i++)
        {
            int flag = 1;
            char SearchID[100];
            cin>>SearchID;
            for(int j=0;j<data;j++)
            {
              if(CheckID(SearchID,database[j].ID)== true)
              {
                  cout<<database[j].ID<<" "<<database[j].Name<<" "<<database[j].Gender<<" "<<database[j].Age<<endl;
                  flag = 0;
                  break;
              }

            }
            if(flag == 1){cout<<"No Answer!"<<endl;}
        }
    }
}
