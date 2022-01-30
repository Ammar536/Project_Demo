#include<iostream>
#include<string>
using namespace std;
class A
{
public:
	A()
	{
		cout << "A constrotor" << endl;
	}
	~A()
	{
		cout << "A constractor" << endl;
	}
};
class B
{
public:
	B()
	{
		cout << "B constrator" << endl;
	}
	~B()
	{
		cout << "B dectrotor" << endl;
	}
};
class C :A, B 
{
public:
	C()
	{
		cout << "C constractor" << endl;
	}
	~C()
	{
		cout << "c Destrator" << endl;
	}
};
int main()
{
	// A c;
	// B b;
	C a;
}