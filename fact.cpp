#include<iostream>
using namespace std;
int main()
{
	long long int f=1;
	int n;
	cin>>n;
	if(n==0 || n==1)
	{
		cout<<1;
	}
	else
	{
		for(int i=1;i<n;i++)
		{
			f=f*i;
		}
		cout<<f;
	}
}