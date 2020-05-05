#include<iostream>
#include<string.h>
using namespace std;
class B;
class A
{
	int a;
public:
	A(int b)
	{
		a=b;
	}

friend int add(A,B);	
};
class B
{
	int b;
public:
	B(int a)
	{
		b=a;
	}
	friend int add(A,B);
};
int add(A a1,B b1)
{
	return(a1.a+b1.b);
}
int main()
{
	A a1(10);
	B b1(20);
	cout<<add(a1,b1);
	return 0;
}