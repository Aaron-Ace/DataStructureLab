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

int num_count=1;

int hanoi(int n, char a, char b, char c)
{
    if(n == 1)
    {
        cout <<num_count<< ". Move disk " << n << " from " << a << " to " << c << "\n";
        num_count+=1;
    }
    else
    {

        hanoi(n - 1, a, c, b);
        cout <<num_count<< ". Move disk " << n << " from " << a << " to " << c << "\n";
        num_count+=1;
        hanoi(n - 1, b, a, c);

    }
}

int main()
{
    int n;

    while(cin >> n)
    {
        num_count=1;
        hanoi(n, 'X', 'Y', 'Z');
    }
    return 0;
}

