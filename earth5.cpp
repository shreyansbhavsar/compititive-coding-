#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,c,d,sum=0;
	cin>>n>>m;
	int a[m],b[m];
	for(i=0;i<m;i++)
	{
		cin>>a[i]>>b[i];
	}
	sort(a,a+m);
	sort(b,b+m);
	if(m==2)
	{
		cout<<0<<" "<<0<<endl;
	}
	else
	{	
		for(i=1;i<=7;i++)
		{
			if(a[i]==a[i+1])
			{
				sum=abs(sum+i);
				break;
			}

			if(b[i]==b[i+1])
			{
				sum=abs(sum-i);
				break;
			}
		}
		if(sum%2==0)
		cout<<1<<" "<<0<<endl;
	else
		cout<<0<<" "<<1<<endl;
	}	
	
}