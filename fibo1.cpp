#include<iostream>
using namespace std;
int main()
{
	int a[100],t,i,b[100],s;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>a[i];
		b[0]=0;
		b[1]=1;
		if(a[i]>2)
		{
			s=2;
			for(i=2;i<a[i];i++)
			{
				b[i]=b[i-1]+b[i-2];
				cout<<b[i];
				s++;
			}
		}
	}
	for(i=0;i<s;i++)
	{
		cout<<b[i];
	}
return 0;
}