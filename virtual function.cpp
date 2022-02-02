#include<iostream>
#include<string>
using namespace std;
class person
{
protected:
	string name;
	int age;
public:
	person()
	{
		cout << "person called" << endl;
	}
	~person()
	{
		cout << "person destractor" << endl;
	}
};
class teacher :virtual public person
{
public:
	teacher()
	{
		cout << "Teacher called " << endl;
	}
	~teacher()
	{
		cout << "teacher distractor" << endl;
	}
};
class student :virtual public person
{
public:
	student()
	{
		cout << "student called" << endl;
	}
	~student()
	{
		cout << "student destestrtor" << endl;
	}
};
class TA :public teacher, public student
{
public:
	TA()
	{
		cout << "TA called" << endl;
	}
	~TA()
	{
		cout << "TA destractor" << endl;
	}
};
int main()
{
	TA a;
}