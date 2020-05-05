#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,m,p;
		cin>>a>>b;
		if(a%b==0)
			cout<<0<<endl;
		else
		{
			c=a/b;
			c=c+1;
			m=b*c;
			p=abs(m-a);
			cout<<p<<endl;
		}
	}
}