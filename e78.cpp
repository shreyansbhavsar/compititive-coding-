#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f=1;
	int n;
	cin>>n;
	if(n==0 || n==1)
	{
		cout<<f<<endl;
	}
	else
	{
		for(i=n;i>=1;i--)
		{
			f=f*i;
		}
		cout<<f<<endl;
	}
}