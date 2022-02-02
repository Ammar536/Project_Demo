#include<iostream>
#include<string>
using namespace std;
class base
{
public:
	base()
	{
		cout << "In base Constractor" << endl;
	}
	~base()
	{
		cout << "Destructor" << endl;
	}
};
class derived :protected base
{
public:
	derived()
	{
		cout << "dervied class" << endl;
	}
	~derived()
	{
		cout << "In dervied distractor" << endl;
	}
};
int main()
{
	// base b;
	 derived d;
	return 0;
}