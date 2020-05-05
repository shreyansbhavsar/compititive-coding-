#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<n*n<<endl;
	int c=1;
	for(i=1;i<=n;i++)
	{
		if(c%2!=0)
		{
			for(j=n;j>=1;j--)
			{
				cout<<i<<" "<<j<<endl;
			}
			c++;
		}
		else
		{
			for(j=1;j<=n;j++)
			{
				cout<<i<<" "<<j<<endl;
			}
			c++;
		}
	}
}