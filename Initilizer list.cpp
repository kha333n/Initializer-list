// Initilizer list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class first
{
private:
	int k;
public:
	first (int);
	void display();
	~first();
};

class outer
{
private:
	class inner
	{
	private:
		int j;
	public:
		inner (int);
		void display();
		~inner();
	};
	int i;
	first k;
	inner l;
public:
	outer (int,int,int);
	void display();
	~outer();
};

void func();

int main()
{
	func();
}

first::first(int n)
{
	cout << "First Created..." << endl;
	k = n;
}


void first::display()
{
	cout << "Value of class first data member is: " << k << endl;
}

first::~first()
{
	cout << "First Destroyed..." << endl;
}

outer::outer(int n,int m,int x): k (m), l(x)
{
	cout << "Outer Created..." << endl;
	i = n;
}

void outer::display()
{
	cout << "Value of class outer data member is: " << i << endl;
	k.display();
	l.display();
}

outer::~outer()
{
	cout << "Outer Destroyed..." << endl;
}

outer::inner::inner(int n)
{
	cout << "Inner created..." << endl;
	j = n;
}

void outer::inner::display()
{
	cout << "Value of class inner data member is: " << j << endl;
}

outer::inner::~inner()
{
	cout << "Inner Destroyed..." << endl;
}

void func()
{
	cout << "Creating outer object..."<< endl;
	outer test(1,2,3);
	test.display();
	cout << "destroying outer object..."<< endl;
}
