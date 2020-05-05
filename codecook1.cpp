#include<iostream>
using namespace std;
int main()
{
	int T,k,i,j,v;
	cin>>T;
	while(T--)
	{
		k=0;
		int n,a[i],b[1000000];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		v=a[n-1]*a[0];
		for(i=0;i<n;i++)
		{
			for(j=v;i>=0;j--)
			{
				if(a[i]%j==0)
				{
					b[k]=j;
					k++;
				}
			}
		}
		cout<<(b[k-1]-b[0])<<endl;
	}
}