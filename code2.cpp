#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,a,b,d,temp;
		int i,v;
		long long  s,c,e;
		cin>>n;
		cin>>a;
		temp=a;
		i=n;
		while(temp!=0)
		{
			s[i]=temp%10;
			temp=temp/10;
			i--;
		}	
		for(i=0;i<n+1;i++)
		cout<<s[i];
		cout<<"\n";
		cin>>b;
		temp=b;
		i=n-1;
		while(temp!=0)
		{
			c[i]-=temp%10;
			temp=temp/10;
			i--;
		}
		i=n-1;
		while(c[i]==9)
		{
			c[i]=0;
			i--;
		}
		c[i]++;
		for(i=0;i<n;i++)
		cout<<c[i];
		cout<<"\n";
		cin>>d;
		temp=d;
		i=n-1;
		while(temp!=0)
		{
			e[i]-=temp%10;
			temp=temp/10;
			i--;
		}
		i=n-1;
		while(e[i]==9)
		{
			e[i]=0;
			i--;
		}
		e[i]++;
		for(i=0;i<n;i++)
		cout<<e[i];
		cout<<"\n";
		cin>>v;
		if(v==-1)
		break;
	}
	return 0;
}

		
		
		
