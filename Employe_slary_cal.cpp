#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
	string name;
	int age;
	double salary;
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
	void set_salary(double s)
	{
		salary = s;
	}
	double get_salary()
	{
		return salary;
	}
	double cal_salary()
	{
		
		return salary;
	}
	Employee(string na,int ag,double sal)
	{
		name = na;
		age = ag;
		salary = sal;
	}
	Employee()
	{

	}
};
class HourlY :public Employee
{
protected:
	int hour;
	double salarY_hour;
public:
	void set_hour(int h)
	{
		hour = h;
	}
	int get_hour()
	{
		return hour;
	}
	void set_salarY_hour(double SH)
	{
		salarY_hour = SH;
	}
	double get_salarY_hour()
	{
		return salarY_hour;
	}
	double cal_salary()
	{
		if (hour > 40)
		{
			return salary + (hour - 40)*salarY_hour;
		}
		else
			return salary;
	}
	HourlY(int H, double SH)
	{
		hour = H;
		salarY_hour = SH;
	}
	HourlY()
	{

	}
};
class commission :public HourlY
{
protected:
	int no_of_item;
	double per_item;
public:
	void set_no_of_item(int NOI)
	{
		no_of_item = NOI;
	}
	int get_no_of_item()
	{
		return no_of_item;
	}
	void set_per_item(double PT)
	{
		per_item = PT;
	}
	double get_per_item()
	{
		return per_item;
	}
	commission(int it, double pt)
	{
		no_of_item = it;
		per_item = pt;
	}
	commission()
	{

	}
	void cal_salary()
	{
		cout << "commission of Employeess is " << endl;
		cout << no_of_item*per_item << endl;
		cout << "Total salarY" << endl;
		cout << no_of_item*per_item + salary << endl;
		
	}
};
class commission_salarY :public commission
{
public:
	double cal_salary()
	{
		return (no_of_item*per_item) + salary + (salary / 100 * 10);
	}
};
void detial()
{
	cout << "Please Enter Option " << endl;
	cout << "1 : For salaried Employeess " << endl;
	cout << "2 : For HourleY Employee " << endl;
	cout << "3 : For Commission Employee " << endl;
	cout << "4 : For commission_salaried Employee " << endl;
}
void menu()
{
	Employee S;
	HourlY H;
	commission C;
	commission_salarY b1;
	int option;
	string n;
	int ag, hour;
	double sal;
	double pp = 0;
	int noi, pt;

	cin >> option;
	if (option == 1)
	{
		cout << "YOU select Fixed salaried Employeesssssssss" << endl;
		cout << "Please Enter The Name OF Employee " << endl;
		cin >> n;
		S.set_name(n);
		cout << "Please Enter The Age OF Employee " << endl;
		cin >> ag;
		S.set_age(ag);
		cout << "Please Enter The SalarY OF Employee " << endl;
		cin >> sal;
		S.set_salary(sal);

		cout << "You ENTER This Detail Of Employee" << endl;
		cout << " Name:" << S.get_name() << endl;
		cout << "Age : " << S.get_age() << endl;
		cout << "SalarY " << S.get_salary() << endl;
		cout << " salarY of Salaried Employee is " << endl;
		cout << S.cal_salary();

	}
	else if (option == 2)
	{
		cout << "YOU select HourlY Employee" << endl;
		cout << "Please Enter The Name OF Employee " << endl;
		cin >> n;
		H.set_name(n);
		cout << "Please Enter The Age OF Employee " << endl;
		cin >> ag;
		H.set_age(ag);
		cout << "Please Enter The SalarY OF Employee " << endl;
		cin >> sal;
		H.set_salary(sal);
		cout << "please ENTER the NO of working Hour Of Employee" << endl;
		cin >> hour;
		H.set_hour(hour);
		cout << "Enter the salarY per hour" << endl;
		cin >> pp;
		 H.set_salarY_hour(pp);
		cout << "You ENTER This Detail Of Employee" << endl;
		cout << " Name:" << H.get_name() << endl;
		cout << "Age : " << H.get_age() << endl;
		cout << "SalarY " << H.get_salary() << endl;
		cout << "One Hour salary is equal to " << H.get_salarY_hour();
		cout << " salarY of HourlY Employee is " << endl;
		cout << H.cal_salary() << endl;
	}
	else if (option == 3)
	{
		
		cout << "YOU select Commission salaried Employee" << endl;
		cout << "Please Enter The Name OF Employee " << endl;
		cin >> n;
		C.set_name(n);
		cout << "Please Enter The Age OF Employee " << endl;
		cin >> ag;
		C.set_age(ag);
		cout << "Please Enter The SalarY OF Employee " << endl;
		cin >> sal;
		C.set_salary(sal);
		cout << "Enter the Number of Item He sale " << endl;
		cin >> noi;
		C.set_no_of_item(noi);
		cout << "Enter the Commission per Item" << endl;
		cin >> pt;
		C.set_per_item(pt);
		cout << "You ENTER This Detail Of Employee" << endl;
		cout << " Name:" << C.get_name() << endl;
		cout << "Age : " << C.get_age() << endl;
		cout << "SalarY " << C.get_salary() << endl;
		cout << " salarY of Commission Employee is " << endl;
		C.cal_salary();
	}
	else if (option == 4)
	{
		cout << "YOU select Commission plus salaried Employee" << endl;
		cout << "Please Enter The Name OF Employee " << endl;
		cin >> n;
		b1.set_name(n);
		cout << "Please Enter The Age OF Employee " << endl;
		cin >> ag;
		b1.set_age(ag);
		cout << "Please Enter The SalarY OF Employee " << endl;
		cin >> sal;
		b1.set_salary(sal);
		cout << "Enter the no of items" << endl;
		cin >> noi;
		b1.set_no_of_item(noi);
		cout << "commission per item is " << endl;
		cin >> pt;
		b1.set_per_item(pt);
		cout << "You ENTER This Detail Of Employee" << endl;
		cout << " Name:" << b1.get_name() << endl;
		cout << "Age : " << b1.get_age() << endl;
		cout << "SalarY " << b1.get_salary() << endl;
		cout << "Number of item " << b1.get_no_of_item() << endl;
		cout << "Commission per item is " << b1.get_per_item();
		cout << " salarY of Salaried Employee is " << endl;
		cout << b1.cal_salary();
	}
	else
	{
		cout << "please Try again" << endl;
	}
}
int main()
{
	
	detial();
	menu();
	return 0;
}
