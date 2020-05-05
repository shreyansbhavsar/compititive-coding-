#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ans=0,c=0,i,j;
		int l=s.size();
		for(i=0;i<l;i++)
		{
			c=0;
			for(j=i+1;j<l;j++)
			{
				if(s[j]==s[i])
				{
					c++;
				}
			}
			ans=ans+c;
		}
		ans=l-ans;
		if(ans%2==0)
		{
			cout<<"player2"<<endl;
		}
		else
		{
			cout<<"player1"<<endl;
		}
	}
}