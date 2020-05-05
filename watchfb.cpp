#include<iostream>
using namespace std;
#define long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int cur=0;
		for(int i=0;i<n;i++)
		{
				int  c,d,y;
				cin>>y>>c>>d;
				if(y==1)
				{
					cur=c;
					cout<<"YES"<<endl;
				}
				else
				{
					if(c>=cur && d>=cur && c!=d)
					{
						cout<<"NO"<<endl;
					}
					else if(c<cur && d<cur)
					{
						cout<<"NO"<<endl;
					}
					else
					{
						if(c>d)
							cur=c;
						else
							cur=d;
						cout<<"YES"<<endl;
					}
				}
		}
	}
}