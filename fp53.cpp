#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,c,i;
		std::map<char, int> map;
		string s;
		cin>>n>>q;
		cin>>s;
		// std::vector<int> v;
		for(i=0;i<n;i++)
		{
			map[s[i]-'a']++;
		}
		while(q--)
		{
			int ans=0;
			cin>>c;
			for(i=0;i<26;i++)
			{
				if(c<map[i])
				{
					ans = ans+map[i]-c;
				}
			}
			cout<<ans<<endl; 
		}
	}
}