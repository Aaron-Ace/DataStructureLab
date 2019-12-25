#include<iostream>
#include<memory.h>

using namespace std;

int a[103][103], row[103], column[103];

int main(void)
{
	int n;
	int i, j, k, fr, fc;
	while (cin>>n)
	{
	    if(n==0){break;}
		///reset
		memset(row, 0, sizeof(row));
		memset(column, 0, sizeof(column));
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				cin>>a[i][j];
				row[i] += a[i][j];
				column[j] += a[i][j];
			}
		}
		j = 0;///check if even
		for (i = 1; i <= n; i++)
		{
			if (row[i] & 1)
			{
				++j;
				fr = i;
			}
		}
		//cout<<"fr:"<<fr<<"J:"<<j<<endl;
		k = 0;///check if even
		for (i = 1; i <= n; i++)
		{
			if (column[i] & 1)
			{
				++k;
				fc = i;
			}
		}
        //cout<<"fc:"<<fc<<"k:"<<k<<endl;
		if (j == 0 && k == 0)
			cout<<"OK"<<endl;
		else if (j == 1 && k == 1)
			cout<<"Change bit ("<<fr<<","<<fc<<")"<<endl;
		else
			cout<<"Corrupt"<<endl;
	}
	return 0;
}
