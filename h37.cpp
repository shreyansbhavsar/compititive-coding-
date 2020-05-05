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
	ll t;
	cin>>t;
	while(t--)
	{
		ll k,d0,d1,f=0;
		cin>>k>>d0>>d1;
		if((d0+d1)%5==0)
		{
			cout<<"NO"<<endl;
			f=2;
		}
		else if((d0+d1)%7==0)
		{
			cout<<"NO"<<endl;
			f=2;
		}
		if((d0+d1)%3==0 && f==0)
		{
			cout<<"YES"<<endl;
			f==1;
		}
		if(f==1)
			cout<<"NO"<<endl;
	}
}