#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		long long  n,b,i;
		cin>>n>>b;
		long long  s=0,c=0,j=0;
		long long a[n];
		for ( i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		
		for ( i=n-1;i>=0;i--)
		{	 
			s=s+a[i];
			if ((s/((j+1)*b))>=1)
			{
				c++;
			}	
			else
			{
				break;
			}
			j++;
		}
		cout<<c<<endl;
	}
	return 0;
}