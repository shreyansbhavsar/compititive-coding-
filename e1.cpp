#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,k,a[10][10],c=0;
	for(int i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			for(k=i+1;k<10;k++)
			{
				
	                if(a[i][j]==a[k][0])
	                {
	                    for(int l=0; l<10; l++)
	                    {
	                        if(a[k][l]==a[i][0])
	                        {
	                            ++c;
	                            a[k][l]=0;
	                        }
	                    }
	                }
	            
			}
		}
	}
	int c1=90-c;
	n=(n*(n-1))/2;
	cout<<n-c1<<endl;
}