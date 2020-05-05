#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int i,j,c=0,f;
		if(s1.size()!=s2.size())
		{
			cout<<"NO"<<endl;
			break;
		}
		else
		{
			for(i=0;i<s1.size();i++)
			{
				for(j=0;j<s2.size();j++)
				{
					if(s1[i]==s2[j])
						c++;
				}
				if(c==0 || c>1)
				{
					cout<<"NO"<<endl;
					f=0;
					break;
				}
				else
					f=1;
					c=0;
			}
			if(f==1)
			cout<<"YES"<<endl;
		}
	}
}