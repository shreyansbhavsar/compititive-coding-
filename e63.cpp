#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d;
	cin>>d;
	int c,f,e,s,b,m,r,a,t,ans;
	cin>>c>>f>>e;
	a=c+(d-f)*e;
	cin>>s>>b>>m>>r;
	t=b+((d/s)*m)+(d*r);
	ans=min(a,t);
	if(ans==a)
		cout<<"Online Taxi"<<endl;
	else
		cout<<"Classic Taxi"<<endl;
}