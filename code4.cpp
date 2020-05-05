#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long N,Q;
	cin>>N>>Q;
	long long  a[N];
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	while(Q--)
	{
		int L,R;
		cin>>L>>R;
		sort(a,a+N)
		for(int i=0;i<n;i++)
		{
			if(a[i]>L)
			{
				i--;
				c++;
			}
			if(a[i+1]<R)
			{
				i++;
				c++;
			}
		}
	}
	if(c!=0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}