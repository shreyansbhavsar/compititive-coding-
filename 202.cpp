#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int n,k,q,i,s;
	cin>>n>>k>>q;
	int a[n]={0};
	s=q;
	for(i=0;i<n;i++)
	a[i]=k;
	while(s--)
	{
		cin>>i;
		a[i-1]++;
	}
	for(i=0;i<n;i++)
	{
		a[i]-=q;
		if(a[i]<=0)
		cout<<No;
		cout<<endl;
		else
		cout<<Yes;
		cout<<endl;
	}
}
