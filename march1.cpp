#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,i;
        cin>>n>>m;
        int f[n],p[n];
        for( i=0;i<n;i++)
            cin>>f[i];
       
        int freq[m]={-1};
        for(i=0;i<m;i++)
        {
            freq[i]=0;
        }

        for( i=0;i<n;i++)
        {
            cin>>p[i];
            if(freq[f[i]-1]==0)
            freq[f[i]-1]=0;
            freq[f[i]-1]+=p[i];
        }

        int ans=10000000;
        sort(freq,freq+m);

        for( i=0;i<m;i++)
        {
            if(freq[i]!=0 && freq[i]<ans)
            ans=freq[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}