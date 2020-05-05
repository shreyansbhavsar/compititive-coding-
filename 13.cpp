#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s=0,b,i;
		int n;
		cin>>n;
		while(n--)
			{
				b=n%10;
				s=s+b;
				n=n/10;
			}
		if(s%2==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}