#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		while(a)
		{
			n=(n/2)+10;
			a--;
		}
		while(n>0 && b>0 )
		{
			n=n-10;
		}
		if(n>0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

	return 0;
}