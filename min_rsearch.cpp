#include"pch.h"
#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int i,min,l;
  //1st idea
	for (i = 0; i < 5; i++)
	{
		cout << "Enter number for index [" << i << "]:\t";
		cin >> a[i];
	}
	min = a[0];
	for (i = 0; i < 5; i++)
		if (a[i] < min)
			min = a[i];
	cout <<"The minimum number is:"<< min<<endl;
	//2nd idea
	int v = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter number:";
		cin >> a[i];
	}
	cout << "What number are you looking for?";
	cin >> l;
	for (i = 0; i < 5; i++)
		if (a[i] == l)
			v++;
	if (v > 0)
		cout << "The number " << l << "is repeated [" << v << "] times.";
	else
		cout << "Number is not found.";




	return 0;
}
