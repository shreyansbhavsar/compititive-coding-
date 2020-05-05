#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i=0,flag=0;
        cin>>n;
        char str[n],a[n],b[n];
        for(i=0;i<n;i++)
        {
            a[i]='0';
            b[i]='0';
        }
        cin>>str;
        for(i=0;i<n;i++)
        {
            if(flag==1)
                break;
            if(str[i]=='2')
            {
                a[i]='1';
                b[i]='1';
            }
            else if(str[i]=='1')
            {
                a[i]='1';
                b[i]='0';
                flag=1;
            }
        }
        for(ll j=i;j<n;j++)
        {
            b[j]=str[j];
        }
        for(i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<b[i];
        cout<<endl;
    }
    return 0;
}