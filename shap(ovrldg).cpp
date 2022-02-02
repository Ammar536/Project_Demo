#include<iostream>
#include<string>
using namespace std;
class shape
{
public:
	int length;
	int width;
	int area()
	{
		cout << "Area is " << endl;
		return length*width;
	}
	void set_length(int l)
	{
		length = l;
	}
	int get_length()
	{
		return length;
	}
	void set_width(int w)
	{
		width = w;
	}
	int get_width()
	{
		return width;
	}
};
class rectuglar : public shape
{
private:
	int height;
public:
	void set_height(int h)
	{
		height = h;
	}
	int get_height()
	{
		return height;
	}

	int area()
	{
		cout << "Area of rectanglar" << endl;
		return length*width;
	}
};
int main()
{
	rectuglar b1;
	int l;
	int w;
	cout << "please Enter the length " << endl;
	cin >> l;
	cout << "please Enter the width" << endl;
	cin>> w;
	b1.set_length(l);
	b1.set_width(w);
	cout << "Total aera " << endl;
	cout<<b1.area();

}