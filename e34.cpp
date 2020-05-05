#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
ll mod=1e9+7;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
	fast;
	ll t,c,i;
	cin>>t;
	while(t--)
	{
		ll n,ans;
		cin>>n;
		string s;
		  cin>>s;
		ans=count(s.begin(),s.end(),'0');
		cout<<ans<<endl;
	}
}