#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int i,a[n]sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];	
		sum=sum+a[i];
	}
	cout<<min(m,sum);


}