#include<iostream>
#include<string.h>
using namespace std;
class d
{
	int feet;
	int inches;
public:
	void getdata()
	{
		cin>>feet;
		cin>>inches;
	}
	void show()
	{
		cout<<feet;
		cout<<inches;
	}
};
int main()
{
d d1;
d1.getdata();
d1.show();
d *p;
p=new d;
p->getdata();
p->show();
return 0;
}
