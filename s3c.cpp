#include<iostream>
#include<string.h>
using namespace std;
class A
{
	int a;
public:
	A()
	{
		a=0;
	}
	A(int a1)
	{
		a=a1;
	}
	A(A &b1)
	{
		a=b1.a;
		return A(a);
	}
	A & operator=(A & b1)
	{
		a=b1.a;
		return A(a);
	}
	void show()
	{
		cout<<a;
	}
};
int main()
{
	A a1(2);
	A a2,a3;
	a1=a2=a3;
	a2.show();
	a3.show();
	return 0;
}