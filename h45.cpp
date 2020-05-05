#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int n,c=0;
	int i;
	std::vector<int> u;
	while(cin>>n)
	{
		if(n==42)
			c=1;
		if(c==0)
		{
			u.push_back(n);
		}
	}
	for(i=0;i<u.size();i++)
	{
		cout<<u[i]<<endl;
	}
}
