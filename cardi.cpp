#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
	int i,j,k,c1,c2,c3,c4,c5,c6,c7;
	char a[10],b[10],c[10],U[30];
	cout<<"Enter the set A,B & C"<<endl;
	cin>>a>>b>>c;
	c1=strlen(a);
	c2=strlen(b);
	c3=strlen(c);
	c4=0;
	c5=0;
	c6=0;
	c7=0;
	int total;

	for(i=0;i<c1;i++)
	{
		for(j=0;j<c2;j++)
		{	
			if(a[i]==b[j])
			{
				c4++;
				
			}
		}
	}
	for(i=0;i<c2;i++)
	{
		for(j=0;j<c3;j++)
		{	
			if(b[i]==c[j])
			{
				c5++;
				
			}
		}
	}
	for(i=0;i<c3;i++)
	{
		for(j=0;j<c1;j++)
		{	
			if(c[i]==a[j])
			{
				c6++;
			}
		}
	}
	for(i=0;i<c1;i++)
	{
		for(j=0;j<c2;j++)
		{	
			for(k=0;k<c3;k++)
			{
				if(a[i]==b[j] && b[j]==c[k])
				{
					c7++;	
				}
			}
		}
	}
	total=c1+c2+c3-c4-c5-c6+c7;
	strcpy(U,a);
	strcat(U,b);
	strcat(U,c);
	int u=strlen(U);
	int LHS=u;
	for(i=0;i<u;i++)
	{
		for(j=i+1;j<u;j++)
		{
			if(U[i]==U[j])
				LHS--;
		}
	}
	cout<<endl<<"(A U B U C) LHS :: "<<LHS<<endl;
	cout<<endl<<" (A U B U C)  RHS:: "<<total<<endl;
}