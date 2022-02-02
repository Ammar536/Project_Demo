#include<iostream>
#include<string>
using namespace std;
class A
{
public:
	A()
	{
		cout << "A constrator" << endl;
	}
	~A()
	{
		cout << "A Destractor" << endl;
	}

};
class B :public A
{
public:
	B()
	{
		cout << "B constractor" << endl;
	}
	~B()
	{
		cout << "B desctractor" << endl;
	}
};
class C :public B
{
public:
	C()
	{
		cout << "c constractor" << endl;
	}
	~C()
	{
		cout << "C destractor" << endl;
	}
};
int main()
{
	C c;
}