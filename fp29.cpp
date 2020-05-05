#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n],j=-1;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(j==-1)
			{
				j=a[i];
			}
			else
			j = min(j,a[i]);
		}
		cout<<j<<endl;
	}
}