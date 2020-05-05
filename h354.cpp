#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,f=0;
		cin>>n;
		int p[n],c[n],i;
		for(i=0;i<n;i++)
			cin>>p[i]>>c[i];
		for(i=0;i<n;i++)
		{
			 
			if (c[i]>p[i])
			{
				f=1;
				cout<<"NO"<<endl;
				break;
			}
			else if (i!=0 && (p[i-1]>p[i] || c[i-1]>c[i] || ((c[i]-c[i-1])>(p[i]-p[i-1]))))
			{
				f=1;
				cout<<"NO"<<endl;
				break;
			}
			
		}
		if (f==0)
					cout<<"YES"<<endl;
	}
	return 0;
}
	