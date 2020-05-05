#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        char str[n];
        for(ll i=0;i<n;i++)
            str[i]='a';   
        ll j=0,i,i1=1,i2=1;
        for(i=1;i<k;i+=j)
        {
            i1++;
            j++;
        }
        if(i==k)
        {
            j++;
            i+=j;
            i1++;
        }
        i2=i-k;
        if(k==1)
        {
            i1=2;
            i2=1;
        }
        str[n-i1]='b';
        str[n-i1+i2]='b';
        for(i=0;i<n;i++)
            cout<<str[i];
        cout<<"\n";
    }
    return 0;
}