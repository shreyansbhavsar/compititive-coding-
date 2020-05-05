#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,i=0;
	string a;
	cin>>a>>k;
	while(k>0)
	{
		if(a[i]=='9')
		{
			i++;
		}
		else
		{
			a[i]='9';
			i++;
		}
		k--;
	}
	cout<<a;  	
}
