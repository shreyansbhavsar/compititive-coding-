
#include <bits/stdc++.h> 

using namespace std; 


int shrey(long long arr[], long long n, long long  k) 
{ 
	int dp[k][n], sum = 0; 
	for (int i = 0; i < n; i++) 
		dp[0][i] = 1;  
	for (int l = 1; l < k; l++) 
	{ 
		for (int i = l; i < n; i++) { 


			dp[l][i] = 0; 
			for (int j = l - 1; j < i; j++) { 
				if (arr[j] < arr[i]) 
					dp[l][i] += dp[l - 1][j]; 
				if(arr[j]==arr[i])
					dp[l][i] += 1; 
			} 
		} 
	} 


	for (int i = k - 1; i < n; i++) 
		sum += dp[k - 1][i]; 
	return sum; 
} 


int main() 
{ 
	long long  n,k,i;
	cin>>n>>k;
	long long a[n];
for(i=0;i<n;i++)
	cin>>a[i];
		cout << shrey(a, n, k)<<endl; 

	return 0; 
} 
