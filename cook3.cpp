#include<bits/stdc++.h>
using namespace std;
// CPP program to Decimal to binary conversion 
// using bitwise operator 
// Size of an integer is assumed to be 32 bits 

// Function that convert Decimal to binary 
int decToBinary(int n) 
{ 
	int b[30];
	// Size of an integer is assumed to be 32 bits 
	for (int i = 0; i <= 31; i++) { 
		int k = n >> i;

		if (k & 1) 
			b[i] = "1"; 
		else
			b[i] = "0"; 
	} 
	return b[30][];	
} 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			decToBinary(a[i],i);
		} 
	}
}