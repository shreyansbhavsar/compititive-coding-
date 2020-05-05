#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,i;
		cin>>n>>a>>b;
		for(i=0;i<n;i++)
		{
			 if(i=0 && i%b==0)
			 	cout<<'a';
			 else
			 	cout<<'a'+i;

		}
		cout<<endl;
	}
}