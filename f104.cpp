#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
ll mod=1e9+7;
int main()
{
	ll a,b,c,d;
	ll x,y,x1,x2,y1,y2;
	cin>>a>>b>>c>>d;
	cin>>x>>y>>x1>>y1>>x2>>y2;
	ll e=x-a+b;
	ll f=y-c+d;
	if(x1<=e && x2>=e && y1<=f && y2>=f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}