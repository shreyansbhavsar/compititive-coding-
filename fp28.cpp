#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=0,c=0,d=0;
		cin>>n;
		char s[n];
		int i;
		for(i=0;i<n;i++)
		{
			cin>>s[i];
			if(s[i]=='A')
				c++;
			else
			{
				d++;
			}
		}
		for(i=0;i<c;i++)
		{
			if(s[i]=='B')
			{
				ans++;
			}
		}
		for(i=c+1;i<n;i++)
		{
			if(s[i]=='A')
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}