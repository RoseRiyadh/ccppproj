#include <iostream>
using namespace std;
int main()
{
	int k = 0;
	int i, m;
	for (i = 1; i <= 7; i++)
	{
		cout << "Enter mark " << i << ":";
		cin >> m;
		if (m < 50)
			k++;
		else
			continue;
	}
	if (k == 0)
		cout << "Passed full.";
	else if (k < 7)
		cout << "Failed with " << k << " subs.";
	else
		cout << "failed full.";

	return 0;
}
