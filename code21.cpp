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
		long long sum,C,E;
		cin>>n;
		cin>>A;
		t=A;
		i=n;
		while(t!=0)
		{
			sum=(t%10)+48;
			t=t/10;
			i-=1;
		}	
		for(i=0;i<n+1;i++)
		cout<<sum;
		cout<<endl;
		cin>>B;
		t=B;
		i=n-1;
		while(t!=0)
		{
			C-=t%10;
			t=t/10;
			i-=1;
		}
		i=n-1;
		while(C==9)
		{
			C=0;
			i-=1;
		}
		C++;
		for(i=0;i<n;i++)
		cout<<C;
		cout<<"\n";
		cin>>D;
		t=D;
		i=n-1;
		while(t!=0)
		{
			E-=t%10;
			t=t/10;
			i-=1;
		}
		i=n-1;
		while(E==9)
		{
			E=0;
			i-=1;
		}
		E++;
		for(i=0;i<n;i++)
		cout<<E;
		cout<<endl;
		cin>>p;
		if(p==-1)
		break;
	}
	return 0;
}

		
		
		
