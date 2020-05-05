#include<iostream>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	int a[50],b[50];
	for(i=0;i<t;i++)
	{
		cin>>a[i];
		b[0]=0;
		b[1]=1;
		cout<<b[0];
		cout<<b[1];
			for(i=2;i<a[i];i++)
			{
				b[i]=b[i-1]+b[i-2];
				cout<<b[i];
			}
	}
}