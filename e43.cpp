#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
ll mod=1e9+7;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
	fast;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,c=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
				c++;
			}
		}
		cout<<c<<endl;
	}

}