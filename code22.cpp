#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int  n,A,B,D,t;
		int i,p;
		char sum[20]="2000000000000000000",C[20]="9999999999999999999",E[20]="9999999999999999999";
		cin>>n;
		cin>>A;
		t=A;
		i=n;
		while(t!=0)
		{
			sum[i]=(t%10)+48;
			t=t/10;
			i-=1;
		}	
		for(i=0;i<n+1;i++)
		cout<<sum[i];
		cout<<endl;
		cin>>B;
		t=B;
		i=n-1;
		while(t!=0)
		{
			C[i]-=t%10;
			t=t/10;
			i-=1;
		}
		i=n-1;
		while(C[i]=='9')
		{
			C[i]='0';
			i-=1;
		}
		C[i]++;
		for(i=0;i<n;i++)
		cout<<C[i];
		cout<<"\n";
		cin>>D;
		t=D;
		i=n-1;
		while(t!=0)
		{
			E[i]-=t%10;
			t=t/10;
			i-=1;
		}
		i=n-1;
		while(E[i]=='9')
		{
			E[i]='0';
			i-=1;
		}
		E[i]++;
		for(i=0;i<n;i++)
		cout<<E[i];
		cout<<endl;
		cin>>p;
		if(p==-1)
		break;
	}
	return 0;
}