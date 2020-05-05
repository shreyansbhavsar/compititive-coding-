#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=s.size();
	int i;
	for(i=0;i<l;i++)
	{
		if(s[i]>=97)
		{
			s[i]=s[i]-32;
		}
		else
		{
			s[i]=s[i]+32;
		}
	}
	for(i=0;i<l;i++)
	{
		cout<<s[i];
	}
	cout<<endl;
}