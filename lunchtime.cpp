#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int e=t;
	char f[t];
	while(t--)
	{	int i=1;
		int m,n;
		cin>>n;
		cin>>m;
		int a[m];
		int c;
		for(int j=0;j<m;j++)
		{
			cin>>a[j];
			c++;
			if(c==n)
			{
				for(int k=0;k<c;k++)
				{
					if(k%2==0)
					{
						if(a[k]%2!=0)
						{}
						else
						{
							f[i]=0;
						}
					}
					else
					{
						if(a[k]%2==0)
						{}
						else
						{
							f[i]=0;
						}
					}
				}
				f[i]=1;
			}	c=1;
			i++;
		}
	}
	while(e--)
	{
		int i=1;
		if(f[i]==1)
		cout<<"YES";
		else
		cout<<"NO";
		i++;
	}
	return 0;
}