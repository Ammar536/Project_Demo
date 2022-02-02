#include<iostream>
using namespace std;
class icecafe
{
private:
	int flever;
	int scope;
	int price;
	int wafer;
public:
	void menu()
	{
		cout << "welcome To Icecafe" << endl;
		cout << "please select flavour" << endl;
		cout << "1 = MAnGo" << endl;
		cout << "2 = vanila" << endl;
		cout << "3 = chocolate" << endl;
		cout << "4 = strwabeery" << endl;
	}
	void info()
	{
		cin >> flever;
		if (flever == 1)
		{
			cout << "You Select Mango flever" << endl;
		}
		else if (flever == 2)
		{
			cout << "You select Vanila flever" << endl;
		}
		else if (flever == 3)
		{
			cout << "You select chocolate flever" << endl;
		}
		else if (flever == 4)
		{
			cout << "You select strewbeery flever" << endl;
		}
		else
		{
			cout << "You Enter Wrong information" << endl;
		}
	}
	void scope1()
	{

		cout << "please Enter the scope" << endl;
		cin >> scope;
		if (scope == 2)
		{
			cout << "You enter Two scope" << endl;
		}
		else if (scope == 3)
		{
			cout << "You enter three scope" << endl;
		}
		else
		{
			cout << "PLEASE TRY AGAIN" << endl;
		}
	}
	void price1()
	{
		if (scope == 2)
		{
			price = 100;
			cout << "price is" << price << endl;
		}
		else if (scope == 3)
		{
			price = 150;
			cout << "price is " << price << endl;
		}


	}
	void wafer1()
	{

		if (scope >= 2 && scope <= 3)
		{
			cout << "You wants to buY wafer with icecream  " << endl;
			cout << "press 1 (YES)" << endl;
			cout << "press 2 (NO)" << endl;
			cin >> wafer;
			if (wafer == 1 && scope == 2)
			{
				price = 100;
				price = 100 + 10;
				cout << " Price with wafer is  " << price << endl;
			}

			else if (wafer == 1 && scope == 3)
			{
				price = 150 + 10;
				cout << "price" << price;
			}
			else
			{
				price = 150;
				cout << "price =" << price;
			}

		}
	}

	icecafe(){

	}

};
void main()
{
	icecafe b1;
	b1.menu();
	b1.info();
	b1.scope1();
	b1.price1();
	b1.wafer1();
}