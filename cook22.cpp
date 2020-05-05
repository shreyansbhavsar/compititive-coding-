#include <bits/stdc++.h>
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
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    a[n]=0;
    int sum=a[0];

    for(int i=1;i<=n;i++)
    {
    if(a[i-1]==a[i])
    {
        if(sum==0)
        {
            sum=a[i];
        }
        else
    sum=a[i]+sum;
    
    }
    else
    {
         if(sum==0)
        {
            sum=a[i];
        }
        else
    sum=sum-a[i];
    
    }
    }
    cout<<sum<<endl;
    }
}