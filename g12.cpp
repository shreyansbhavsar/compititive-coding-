#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
	    for(i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        if(a[n-1]==b[n-1])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    	// your code goes here
    	
	return 0;
}