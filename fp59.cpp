#include<bits/stdc++.h>
using namespace std;
void shrey(int a[],int i,int j)
{
	int temp;
	temp = a[i];
	a[i]= a[j];
	a[j]=temp;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,s=0;
		cin>>n>>m;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(m==0)
		{
			int j = 0;
			while(j<n)
			{
				if(a[j]==j)
				{
					j++;
					continue;
				}
				j++;
				shrey(a,j,a[j]);
				s++;
			}
			cout<<s<<endl;
		}
	}
}