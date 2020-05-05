#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j,c=0;
		cin >> n;
		int a[n];
		a[0]=0;
		a[1]=0;
		for(i=2;i<n;i++)
		{
			for(j=i-2;j>=0;j--)
			{
				if(a[j]==a[i-1])
				{
					a[i]=i-1-j;
					break;
				}
			}
			if(j==-1)
				a[i]=0;
		}
		for(i=0;i<n;i++)
			{
				if(a[i]==a[n-1])
					c++;
			}
			cout << c << endl;
	}
}