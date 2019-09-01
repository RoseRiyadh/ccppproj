#include"pch.h"

#include <iostream>

using namespace std;


int main() {
	

	
char a[3][3], b[9], c[9];

	int i, j, n = 0, m = 0;

	cout << "Enter 9 letters :";

	for (i = 0; i < 3; i++)
		
for (j = 0; j < 3; j++)

			cin >> a[i][j];

	for(i=0;i<3;i++)

		for (j = 0; j < 3; j++)

		{
			
if (a[i][j] >= 'A'&&a[i][j] <= 'Z')

				b[n++] = a[i][j];
			
if (a[i][j] >= 'a'&&a[i][j] <= 'z')

				c[m++] = a[i][j];

		}
	
cout << endl << "Capital letters are:";

	for (i = 0; i < n; i++)
		
cout << b[i]<<"\t";
	
cout << endl << "Small letters are:";

	for (j = 0; j < m; j++)
		
cout << c[j] << "\t";







	return 0;
}
