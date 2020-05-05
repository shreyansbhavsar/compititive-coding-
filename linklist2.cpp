#include<iostream>
#include<string.h>
using namespace std;
struct node
{
	int n;
	node *next;
};
class linklist
{
	node *first;
public:
	void addfirst(int n)
	{
		node *newnode=new node;
		newnode->data=n;
		newnode->next=first;
		newnode=first;
	}
	void addbetween(node *P,int n)
	{
		node *newnode=new node;
		newnode->data=n;
		newnode->next=p->next;
		p->next->newnode;
	}
	void addlast(int n)
	{
		node *newnode=new node;
		newnode->data=n;
		newnode->next=NULL;
		node *t;
		t=first;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=newnode;
	}
	void display()
	{
		node *c=first;
		while(c!=NULL)
		{
			cout<<c->data<<endl;
			c=c->next;
		}
	}
	void delete(int n)
	{
		node *t=first;
		if(t->data==n)
		{
			frist=t->next;
		}
		while(t->next->data!=n)
		{
			t=t->next;
		}
		node *p=t->next;
		t->next=t->next->next;
		delete (p);
	}
};
int main()
{
	return 0;
}
