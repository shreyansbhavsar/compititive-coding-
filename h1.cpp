#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=10000;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
         m=min(m,a[2]+a[i]);
    }
    cout<<m<<endl;

}