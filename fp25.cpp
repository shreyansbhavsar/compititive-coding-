#include<bits/stdc++.h> 
#include <string> 
using namespace std;
int binaryToDecimal(string n) 
{ 
	string num = n; 
	int dec_value = 0; 
	int base = 1; 

	int len = num.length(); 
	for (int i = len - 1; i >= 0; i--) { 
		if (num[i] == '1') 
			dec_value += base; 
		base = base * 2; 
	} 

	return dec_value; 
} 






void decToBinary(long long n,char c,long long m) 
{ 
	int k,j;
	string binaryNum; 
	int i = 0; 
	while (n > 0) { 
 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
	if(c='L')
	{
		k=0;
		for(j=m-1;j>=0;j--)
		{
			swap(binaryNum[j],binaryNum[15-k]);
			k++;
		}

		cout<<binaryToDecimal(binaryNum)<<endl; 
	}
	else{
		for(j=m-1;j>=0;j--)
		{
			swap(binaryNum[j],binaryNum[15-j]);
		}
		cout<<binaryToDecimal(binaryNum)<<endl; 
	}

} 







int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		char c;
		long long ans;
		cin>>n>>m>>c;
		decToBinary( n, c, m);
	}
}