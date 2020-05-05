#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,c,i;
		// std::map<int, char> map;
		string s;
		cin>>n>>q;
		cin>>s;
		while(q--)
		{ int ans,cnt=0;
			std::map<char, int> map = {};
			std::map<int, char> m;
			cin>>c;
			for(i=0;i<n;i++)
			{
				if(map[s[i]]==0)
				{
					map[s[i]]=1;
					cnt++;
				}
				else{
					if(map[s[i]]!=c)
					{
						cnt++;
						map[s[i]]++;
					}
				}

			}
			// cout<<cnt<<endl;
			ans = n-cnt;
			// ans = cnt;
			cout<<ans<<endl;
		}
	}
}