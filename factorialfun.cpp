#include"pch.h"
#include<iostream>
using namespace std;
int love(int a)
{
	int f=1,i;
	for (i = 1; i <= a; i++)
		f *= i;
	return f;
}
int main()
{
	int z, x, y;
	cout << "Enter the value of X:";
	cin >> x;
	cout << "Enter the value of Y:";
	cin >> y;
	z = love(x) + love(y);
	cout << z;
	








	return 0;}
