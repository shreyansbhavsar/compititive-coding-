#include<bits/stdc++.h>
using namespace std;
void shrey(int n,int s,int b)
{
while (1)
		{
			b=b+pow(2,s);
			s=s+1;
			if (n%b==0)
			{
				cout<<n/b<<endl;
				break;
			}
		}
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,b=1,s=1;
		cin>>n;
		shrey(n,b,s);
	}
	return 0;
}