#include<iostream>
#include<string>
using namespace std;
class person
{
protected:
	string name;
	int age;
public:
	void set_name(string n)
	{
		name = n;
	}
	string get_name()
	{
		return name;
	}
	void set_age(int a)
	{
		age = a;
	}
	int get_age()
	{
		return age;
	}
	person()
	{
		name = "null";
		age = 0;
	}
	person(string n, int a)
	{
		name = n;
		age = a;
	}
	
};
class teacher :public person
{
private:
	int salary = 0;
	string subject;
	int id;
public:
	void set_salary(int s)
	{
		salary = s;
	}
	int get_salary()
	{
		return salary;
	}
	void set_subject(string sb)
	{
		subject = sb;
	}
	string get_subject()
	{
		return subject;
	}
	void set_id(int d)
	{
		id = d;
	}
	int get_id()
	{
		return id;
	}
};
class student :public person
{
	string reg_no;
	int mark;
public:
	void set_reg_no(string r)
	{
		reg_no = r;
	}
	string get_reg_no()
	{
		return reg_no;
	}
	void set_mark(int m)
	{
		mark = m;
	}
	int get_mark()
	{
		return mark;
	}
};
void main()
{
	student *s = new student[3];
	cout << "ENTER THE STUDENTS DATA" << endl;
	for (int i = 0; i < 3; i++)
	{
		string n;
		cout << "ENTER THE NAME OF STUDENT" << endl;
		cin >> n;
		s[i].set_name(n);

		int a;
		cout << "ENTER THE AGE OF STUDENT" << endl;
		cin >> a;
		s[i].set_age(a);

	}
	for (int i = 0; i < 3; i++)
	{
		cout << s[i].get_name() << endl;
		cout << s[i].get_age() << endl;
	}
	

}