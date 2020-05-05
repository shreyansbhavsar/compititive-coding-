#include<iostream>
#include<string.h>
using namespace std;
struct link
{
	int data;
	list *next;
};
class linklist
{
	link *first;
public:
	linklist()
	{
		first=NULL;
	}
	void add(int d);
	void display();
};
void linklist::add(int d)
{
	link *newl=new link;
	newl->data=d;
	newl->next=first;
	first=newl;
}
void linklist::display()
{
	link * c=first;
	while(c!=NULL)
	{
		cout<<c->data<<endl;
		c=c->next;
	}
}
int main()
{
	linklist l1;
	l1.add(1);
	l1.add(2);
	return 0;
}