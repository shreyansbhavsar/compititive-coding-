#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m;
	cin>>n>>m;
	long long  s[n],i;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	std::map<long long,long long> map;
	std::vector<long long> v;
	for(i=0;i<n;i++)
	{
		if(map[s[i]]==0)
		{
			map[s[i]]++;
			v.push_back(i+1);
		}
	}
	if(m<=v.size())
	{
		cout<<"YES"<<endl;
		for(i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
	}
	else
		cout<<"NO";
}