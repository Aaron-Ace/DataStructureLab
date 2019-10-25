#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input_string;
    while(getline(cin,input_string))
    {
        //cout<<input_string<<endl;
        int length_string;
        length_string = input_string.length();
        //cout<<"length:"<<length_string<<endl;
        for(int i=0;i<length_string;i++)
        {
            //cout<<input_string[i]<<endl;
            if(i==0)
            {
                //LowerCaseToCapital(input_string[i]);
                cout<<(char)toupper(input_string[i]);

            }
            else if(input_string[i]==' ')
            {
                //LowerCaseToCapital(input_string[i+1]);
                cout<<(char)toupper(input_string[i+1]);
                i+=1;
            }
            else
            {
                //CapitalToLowerCase(input_string[i]);
                cout<<(char)tolower(input_string[i]);
            }
        }
        cout<<endl;
    }
}
