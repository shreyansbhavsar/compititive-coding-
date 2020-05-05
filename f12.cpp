#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0,c1=0;
	string s;
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='a')
		{
			c++;
		}
		else
		{
			c1++;
		}
	}
	if(c==n/2 && c1==n/2)
	{
		cout<<0<<endl;
		cout<<s<<endl;
	}
	else
	{
		if(c1>c)
		{int p=0;
			while((n/2-c)--)
			{
				s[i]='a';
				p++;
			}
		}
		else
		{
			int p=0;
			while((n/2-c1)--)
			{
				s[i]='b';
				p++;
			}
		}
	}

}