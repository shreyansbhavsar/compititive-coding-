#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,s;
	cin>>T>>s;
	while(T--)
	{
		int p,y=0;
		cin>>p;
		int s[p],r[p],t=0;
		for(int i=0;i<p;i++)
			cin>>s[i];
		for(int i=0;i<p;i++)
			cin>>r[i];
		sort(s,s+p);
		sort(r,r+p);
		for(int i=0;i<p;i++)
		{
			if(r[i]<=s[i])
			{
				t=1;
				break;
			}
			else if( i>0 && s[i]!=s[i-1] && !(binary_search(r,r+i,s[i])))
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}