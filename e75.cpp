#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,q,i,m;
		cin>>n>>k>>q;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			m=min(m,a[i]);
		}
		cout<<m<<endl;
	}
}