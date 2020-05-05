#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
ll mod=1e9+7;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define um unordered_map
#define pr pair
#define mm multimap
#define ms multiset
#define mp make_pair
#define vr vetorc
int main()
{
	fast;
	ll n,b,i,m;
	cin>>n;
	std::vector<int> v;
	ll j=0,a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);

	ll ans=0;
	for(i=0;i<n;i++)
	{
		m=a[i]*(n-i);
		ans=max(ans,m);
	}
	cout<<ans;
}