#include<bits/stdc++.h>
using namespace std;
bool f(int x,int y)
{
	return x>y;
}
int main()
{
	int n,a;
	cin>>n;
	std::vector<int> v;
	while(n--)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),f);
	int m=0;
	for(i=1;i<=n;i++)
	{
		m=max(m,v[i]*i);
	}
	cout<<m<<endl;
}