#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long i,a[n],d,c,sum,f=0,g=0,m,n1;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>m)
			{
				m=a[i];
			}
			else if(a[i]<0)
			{
				if(abs(a[i])<n)
				{
					n1=a[i];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>0 && f==0)
			{
				sum = sum+m;
				f=1;
				g=0;
			}
			else(a[i]<0 && g==0)
			{
				f=0;
				sum=sum+n;
				g=1;
			}

		}
		cout<<sum<<endl;
	}
}