#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		std::vector<int> v;
		long long c=0,s,ans=0,i,p;
		cin>>n;
		if((n/2)%2!=0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			for(i=0;i<(n/2);i++)
			{
				int s=(i+1)*2;
				v.push_back(s);
				c=c+s;
			}
			for(i=0;i<(n/2)-1;i++)
			{
				p=2*(i-n/2+1)-1;
				v.push_back(p);
				ans=ans+p;
			}
			v.push_back(c-ans);
			cout<<"YES"<<endl;
			for(i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
	}
}
