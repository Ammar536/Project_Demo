#include<iostream>
#include<string>
using namespace std;
void main()
{
	int *a = new int[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "inter number" << endl;
		cin >> a[i];
	}

	int *b = new int[4];
	for (int i = 0; i < 4; i++)
	{
		b[i] = a[i];
		cout << b[i];
	}
	delete[]b;
	
}