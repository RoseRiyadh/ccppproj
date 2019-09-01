#include"pch.h"
#include<iostream>
using namespace std;
int main()
{
	int a[3][3], b[9];
	int j , i, m = 0;
	for (j = 0; j < 9; j++)
	{
		cout << "Enter number [" << j << "]:\t";
		cin >> b[j];
	}
	cout << endl;
	for (i=0;i<3;i++)
		for (j = 0; j < 3; j++)
			{
			a[i][j] = b[m++];
			}
	for (i = 0; i < 3; i++)
		for(j=0;j<3;j++)
			cout << a[i][j]<<"\t";

	return 0;
}
