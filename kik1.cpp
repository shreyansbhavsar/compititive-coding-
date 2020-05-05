#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int c=1;
	while(t--)
	{
		int n,b;
		cin>>n>>b;
		int a[n],ans=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(a[i]<=b && b!=0)
			{
				ans = ans+1;
				b=b-a[i];
				if(b==0)
					break;
			}	

		}
		cout<<"case"<<" "<<"#"<<c<<":"<<" "<<ans<<endl; 
		c=c+1;
	}
}