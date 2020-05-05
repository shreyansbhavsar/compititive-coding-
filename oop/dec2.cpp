#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p=0,n,i,j,c=0,s=0,t;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];

		}
		for(i=0;i<n;i++)
		{

			if(a[i]==2)
			{
				s=s+1;
			}	
			if(a[i]==0)
			{
				p=p+1;
			}
		}		
		long long int ans=(p*(p-1))/2+(s*(s-1))/2;
		cout<<ans;
	}
}