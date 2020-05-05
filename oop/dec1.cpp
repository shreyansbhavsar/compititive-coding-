#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n],s=0,p=0;
		for(int i=0;i<n;i++)
		{ 
			cin>>a[i];
			cin>>b[i];
			if(!(a[i]>=9))
			{
				s=s+b[i];
			}
			for(int j=0;j<i;j++)
			{
				if(a[i]==a[j])
				{
					if(b[i]<b[j])
					{
						p=p+b[i];
					}
				}
			}
		}
		cout<<s-p<<endl;
	}
}