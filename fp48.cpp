#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define loop(s,e) for(ll i=(s);i<e;i++)
#define rloop(s,e) for(ll i=s;i>=e;i--)
#define loop1(s,e) for(ll j=s;j<e;j++)
#define pb push_back
#define pf push_front
#define vll vector<ll>
ll mod = 1000000007;
ll power(ll a, ll b)
{
  ll pow = 1;
  while ( b ) 
  {
         if ( b & 1 ) 
         {
           pow = (pow%mod * a%mod)%mod;
           --b;
         }
         a = (a%mod*a%mod)%mod;
         b = b/2;
  }
  return pow;
}
int main()
{
  ll t;
  cin >> t;
  while(t--){
    ll a,b,q;
    cin >> a >> b >> q;
    loop(0,q){
      ll l,r,count = 0;
      cin >> l >> r;
      if(a%b!=0 or b%a!=0){
        loop1(l,r+1){
          ll a1 = (j % a)%b;
          ll a2 = (j % b)%a;
          if(a1!=a2)
            count++;
        }
      }
      cout << count << " ";
    }
    cout << endl;
  }
}