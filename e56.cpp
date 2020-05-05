#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,k,c=0;
	int i;
	cin>>l>>r>>k;
	for(i=l;i<=r;i++)
	{
		if((i%k)==0)
		{
			c++;
		}
	}
	cout<<c<<endl;
}