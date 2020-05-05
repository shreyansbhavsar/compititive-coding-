#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int d=0;
	int u=7;
	while(t--)
	{
		int n,c,e;
		cin>>n;
		c =n-d;
		e =u-n;
		if(c<=e)
		{	d=c;
			cout<<"A"<<endl;
		}
		else
		{
			u=e;
			cout<<"B"<<endl; 	
		}



	}
}