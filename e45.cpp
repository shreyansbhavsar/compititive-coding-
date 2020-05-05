#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int ians=1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		ans=((ans*a[i])%(1000000007));
	}
cout<<((ans)%(1000000007))<<endl;
	return 0;

}