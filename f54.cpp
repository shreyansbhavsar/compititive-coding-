#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k;
		cin>>n;
		  string a[n];
		  cin>>a;
		 int c=0;
		for(i=0;i<2;i++)
		{
			int b[n];
			for(j=0;j<n;j++)
			{
				if(a[i]==0)
				{
					b[i]=0;
				}
				if(a[i]==1)
				{
					if(c==0)
					{
						b[i]=1;
					}
				}
				if(a[i]==2)
				{
					b[i]=1;
				}
			}
			for(k=0;k<n;k++)
			{
				cout<<b[k];
			}
			cout<<endl;
		}
	}
}