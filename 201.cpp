#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		char a[n];
		cin>>a;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='B' && a[i+1]=='G')
			{
				int s=0;
				while(a[i+1]=='G' && i<n)
				{
					s++;
					i++;
				}
				if(s>c)
				c=s;
			}
		
		}
		cout<<c<<endl;
	}
}