//dec двухсвязанный список
#include <iostream>
#include <Windows.h>
using namespace std;
class Date
{
private:
	int x;
	Date* r;
	Date*l;//указатели на правий и на левый объект такого же класса
public:
	Date():x(0),r(NULL), l(NULL) {}
	void input()
	{
		cout << " enter x " << endl;
		cin >> x;
	}

	void show() 
	{
		cout << " x is " << x<<endl;
	}
};
class Dec
{
private:
	Date* R;
	Date* L;
	int count;
public:
	Dec() :R(NULL), L(NULL), count(0) {}
	void add_elements()
	{
		if (L == NULL)
		{
	L = new Date;
		R = L;
		++count;
		}
		else
		{
			Date* t = new Date;
			L->l = t;
			
		}
	}

};

void main()
{
	Dec a;
}