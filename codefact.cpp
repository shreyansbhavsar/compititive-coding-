#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	cin>>t;
	int i,a[100],j=0,b[100],c[100],k,x;
	a[0]=0;
	a[1]=1;
	for(i=2;i<t;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<t;i++)
	{
		if(a[i]>=10)
		{
			a[i]=a[i]%10;
		}
		if(i%2==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	x=j;
	do
	{
		k=0;
		for(i=0;i<x;i++)
		{
			(i%2==0)
			{
				c[k]=b[i];
				k++;
			}	
		}
		x=k;
	}while(x!=2)
		cout<<c[1];
}