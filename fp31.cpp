 #include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define vll vector<ll> 
#define f(i,x,y)  for(i=x;i<y;i++)
#define INF     LLONG_MAX
#define fast    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define s(x) sort(x.begin(),x.end())
ll shrey(ll x, ll y, ll p = 1e9+7) 
{ 
    ll res = 1;
    bool modulo = true;
    if(modulo) x = x % p;
    while(y>0) 
    { 
        if(y&1)
        {
            if(modulo) res = (res*x) % p;
            else res *= x;
        }
        if(modulo) x = (x*x) % p;
        else x *= x;
        y = y>>1;
    }
    return res;
}
int main() 
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,k,l,n,a;
        cin>>n>>a;
        ll ans=0;
        ll mod=1000000007;
        ll sum=a;
        ll s=a;
        for(i=1,j=1;i<=n;i++,j+=2)
        {
            s=shrey(sum,j);
            ans=(ans+s)%mod;
            sum=(sum*s)%mod;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}