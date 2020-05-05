#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j;
	cin>>i;
	while(i--)
	{
		char st[5];
		cin>>st;
		int s=0,l;
		l=strlen(st);
		for(j=0;j<l;j++)
		{
			s=s+st[j]-97;
		}
		cout<<s;
		if(st[l-1]<st[0])
		{
			st[0]-=1;
			st[l-1]+=1;
		}
		else if(st[l-1]>st[0])
		{
			st[l-1]-=1;
			st[0]+=1;
		}
		else if(l==1 || (s/l)==0 || (s/l)==25)
		{
			cout<<-1;
		}
		for(j=0;j<l;j++)
		{
			cout<<st[j];
		}
	}

	return 0;
}