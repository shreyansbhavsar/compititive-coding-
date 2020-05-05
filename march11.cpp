#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int f[n],p[n],no[m]={0},i;
		for(i=0;i<n;i++)
		cin>>f[i];
		int min=1000000;
		for(i=0;i<m;i++)
		{
			no[i]=-1;
		}
		for(i=0;i<n;i++)
		{
			cin>>p[i];
			if(no[f[i]-1]==-1)
			no[f[i]-1]=0;
			no[f[i]-1]+=p[i];
		}
		for(i=0;i<m;i++)
		{
			if(no[i]!=-1 && no[i]<min)
			min=no[i];
		}
		cout<<min<<endl;
	}
	return 0;
}
