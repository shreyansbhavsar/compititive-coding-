#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int sum=0,mul=0,c=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
			mul =a[i]*mul;
		}
		
}




t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    c = a.count(0)
    if sum(a) + c == 0:
        c += 1
    print (c)