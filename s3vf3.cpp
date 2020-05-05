#include<iostream>
#include<string.h>
using namespace std;
class p
{
	char name[20];
public:
	void get()
	{
		cin>>name;
	}
	void show(){
		cout<<name;
	}
	virtual void getdata()=0;
	virtual void showdata()=0;
};
class s:public p
{
	int n;
public:
	void getdata()
	{
		p::get();
		cin>>n;
	}
	void showdata()
	{
		p::show();
		cout<<n;
	}
};
class e:public p
{
	char x;
public:
	void getdata()
	{
		p::get();
		cin>>x;
	}
	void showdata()
	{
		p::show();
		cout<<x;
	}
};
int main()
{
	p *ptr[100];
	n=0;
	d0
	{
		cin>>choice;
		if(choice=='s'||'S')
		{
			ptr[n]=new s;
			ptr[n]->getdata();
		}
		else
		{
			ptr[n]=new e;
			ptr[n]->getdata();
		}
		n++;
		cin>>choice;
	}while(choice=='y'||'Y')
	for(int i=0;i<n;i++)
	{


	}
	return 0;
