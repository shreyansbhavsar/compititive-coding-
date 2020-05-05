#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,q,j,p;
		cin>>p;
		for(j=0;j<p;j++)
		{
				cin>>i>>n>>q;
			if(i==q)
				cout<<n/2<<endl;
			else
				cout<<(n+1)/2<<endl;
		}
	
	}
}