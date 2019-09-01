#include<iostream>
using namespace std;
int main()
{
	int a[3][3], b[3];
	int j, i;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			cout << "Enter number [" << i << "]x[" << j << "]:\t";
			cin >> a[i][j];
		}
	cout << endl << "The array:\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << endl;
	cout << endl << "Taking Secondary diagonal into a new 1D array before changing:\n";
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (i + j == 2)
				b[i] = a[i][j];
	for (i = 0; i < 3; i++)
		cout << b[i] << "\t";

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (i == j)
				a[i][j] = 0;
	
	cout << endl << "Replacing Main diagonal with zero:\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	cout << endl << "Taking Secondary diagonal into a new 1D array after changing:\n";
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (i + j == 2)
				b[i] = a[i][j];
	for (i = 0; i < 3; i++)
		cout << b[i] << "\t";



	return 0;
}
