#include<iostream>
#include<string.h>
using namespace std;
class base
{
public:
	virtual	void show()=0;
};
class d1:public base
{
public:
	void show()
	{
		cout<<"shreyans";
	}
};
class d2:public base
{
public:
	void show()
	{
		cout<<"bhavsar";
	}
};
int main()
{
	d1 b;
	d2 a;
	base *p;
	p=&b;
	p->show();
	p=&a;
	p->show();
}
