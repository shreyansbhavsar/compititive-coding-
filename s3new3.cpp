#include<iostream>
#include<string.h>
using namespace std;
class princy
{
	char name[20];
public:
	void set()
	{
		cin>>name;
	}
	void show()
	{
		cout<<name;
	}
};
int main()
{
	princy *p[1000];
	int n=0;
	char choice;
	do
	{
		p[n]=new princy;
		p[n]->set();
		n++;
		cin>>choice;
	}
	while(choice=='Y'||'y');
	for(int i=0;i<n;i++)
	{
		p[i]->show();
		delete p[i];
	}
	return 0;
}