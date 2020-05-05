#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int t1,t2;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			t1=i;
		}
		else
		{
			t2=i;
		}
	}
	int ans=min(t1,t2);
	cout<<ans+1;
}