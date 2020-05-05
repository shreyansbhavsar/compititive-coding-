#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,i,b,s=0,c=0,j,k=0,f;
	cin>>t;
	char a[t+1];
	cin>>a;
	j=t-1;
	for(i=0;i<t;i++)
	{
		b=(pow(2,j))*int(a[i]%48);

		s=s+b;
		j--;
	}
	while(s%2==0)
	{
		c++;
		s=s/2;
	}
	cout<<c;
}