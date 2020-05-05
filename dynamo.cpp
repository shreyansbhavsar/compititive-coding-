#include<iostream>
#include<cinttypes>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		std::int64_t n,a,b,d,temp;
		int i,v;
		char s[20]="2000000000000000000",c[20]="9999999999999999999",e[20]="9999999999999999999";
		cin>>n;
		cin>>a;
		temp=a;
		i=n;
		while(temp!=0)
		{
			s[i]=(temp%10)+48;
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
		while(c[i]=='9')
		{
			c[i]='0';
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
		while(e[i]=='9')
		{
			e[i]='0';
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

		
		
		
