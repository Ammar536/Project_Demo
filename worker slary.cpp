#include<iostream>
#include<string>
using namespace std; 
class employee
{
protected:
	string name;
	string id;
public:
	void set_name(string nam)
	{
		name = nam;
	}
	string get_name()
	{
		return name;
	}
	void set_id(string ID)
	{
		id = ID;
	}
	string get_id()
	{
		return id;
	}

};
class H_empleeyo :public employee{
	int houre;

	
public:
void	hourlyemp()
	{
	int num;
	cout << "enter the number of houre" << endl;
	cin >> num;
	cout << "total hour working" << num << endl;
	cout << "Total income is " << 150 * num << endl;
	}
H_empleeyo(string n, int i, int h)
{
	
	name = n;
	id = i;
	houre = h;
}
H_empleeyo()
{

}

};

class p_empl :public employee
{
public:
	void income()
	{
		cout << "Total salarry of permenant worker is  " << endl;
		cout << 240 * 140;
	}
};
void main()
{
	H_empleeyo a;
	p_empl b;
	string name;
	string id;
	int opt;

	cout << "please Enter the option" << endl;
	cout << "press 1: For hourelY" << endl;
	cout << "press 2: For perminant" << endl;
	cin >> opt;
	if (opt == 1)
	{

		cout << "Enter the name of hourely hour" << endl;
		cin >> name;
		a.set_name(name);
		cout << "Enter the ID of hourely hour" << endl;
		cin >> id;
		
		a.set_id(id);
		cout << "RECOURED" << endl;
		cout << "name =" << a.get_name();
		cout << "ID =" << a.get_id();
		a.hourlyemp();
	}
	else if (opt == 2)
	{

		cout << "Enter the name of perminant hour" << endl;
		cin >> name;
		b.set_name(name);
		cout << "Enter the ID of perminant hour" << endl;
		cin >> id;
		a.set_id(id);
		cout << "RECOURED" << endl;
		cout << "name =" << b.get_name();
		cout << "ID =" << b.get_id();
		b.income();
	}
	else
	{
		cout << "please try again" << endl;
	}
}