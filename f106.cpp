#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=s.size();
	if(s[l-1]%2==1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
}