#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	int b=0,c=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='L')
		{
			b=b-1;
		}
		else
		{
			c=c+1;
		}
	}
	cout<<abs(c)+1+abs(b);
}