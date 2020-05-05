#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int sum=0,i;
	int l=s.size();
	for(i=0;i<l;i++)
	{
		sum=sum+s[i]-96;
	}
	cout<<sum<<endl;
}