#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[m];
        ll i,j,s,p;
        ll m1=0,m2=1;
        for (int i=0; i < n; i++)
         {
            for (int s=0; s < m; s++) 
                a[s] = 0;
            for (int j=0; j < k; j++) 
            {
                cin>>p;
                a[p-1]++;
            }
            for ( s=0; s < m; s++) 
            {
                if (a[s] > m1) 
                {
                    m2 = s+1;
                    m1 = a[s];
                }
            }
            cout<<m2<<" ";
        }
        cout<<endl;
    }
    return 0;
}