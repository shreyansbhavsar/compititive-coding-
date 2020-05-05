#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,sum=0,j;
	cin>>n>>k;
	int a[n],i,b[k];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	sort(a,a+n);
	b[0]=sum;
	for(i=0;i<k;i++)
	{
		if(sum!=0)
		{
			b[i]=sum-a[i];
			sum=sum-a[i];
		}
		else
		{
			for(j=n-1;j>=0;j--)
			{
				b[i]=a[j];
			}
		}
	}
	for(i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}

}