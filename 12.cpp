#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
        char a[100000000]; 
        cin>>a;
        int d=strlen(a);
	    int flag=0;
	    sort(a,a+d);
	    for(int i=0;i<d;i++)
	    {
	        if(a[i+1]-a[i]>2)
	            flag=1;
	    }
	    if(flag==1)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}