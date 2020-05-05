#include<iostream>
using namespace std;
int main()
{
	long int t,a=0,c,b=1,b[500000],s,c[5000000];
	cin>>t;
	long int a[t];
	for(int i=0;i<t;i++)
	{

		cin>>a[i];
		b[0]=0;
		b[1]=1;
		c[0]=1;
		s=1;
		if(a[i]>2)
		{
			for(i=0;i<a[i];i++)
			{
				b[i]=b[i-1]+b[i-2];
				if(i%2==0)
				{
					c[s]=b[s];
					s++;
				}
			}
		}
	}
	for(i=0;i<s;i++)
	{
		cout<<c[i];
	}
}