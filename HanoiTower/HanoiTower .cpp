//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|---0908-226-963-----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|


#include <iostream>

using namespace std;

int count=0;

void hanoi(int n, char a, char b, char c,int m)
{
    m+=1;

    if(n == 1)
    {
        cout <<m<< ". Move disk " << n << " from " << a << " to " << c << "\n";
    }
    else
    {

        hanoi(n - 1, a, c, b, m);
        //m+=1;
        cout <<m<< ". Move disk " << n << " from " << a << " to " << c << "\n";
        //m+=1;
        hanoi(n - 1, b, a, c, m);
    }
}

int main()
{
    int n;

    while(cin >> n)
    {
        int count=0;
        hanoi(n, 'X', 'Y', 'Z',count);
    }
    return 0;
}

