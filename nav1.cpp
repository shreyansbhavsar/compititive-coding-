#include<iostream>
using namespace std;
int main()
{
	int i,n,t,b,c=0,j;
	cin>>n;
	char a[100000][10];
	while(n--)
	{
		cin>>t;
		b=0;
		for(i=0;i<t;i++)
		{ 
			for(j=0;j<10;j++)
			{
			cin>>a[i][j];
			}	
		}
		for(i=0;i<10;i++)
		{
			for(j=0;j<t;j++)
			{
				if(a[j][i]=='1')
				{
					c++;
				}
			}
			if(c%2!=0)
			{
				b++;
			}
			c=0;
		}
		cout<<b;
	}
}