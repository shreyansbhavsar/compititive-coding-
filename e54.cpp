#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
ll mod=1e9+7;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define um unordered_map
#define pr pair
#define mm multimap
#define ms multiset
#define mp make_pair
#define vr vector
int main()
{
    fast;
   ll n,k;
   while(cin>>n)
   {
       k=0;
       while(n)
       {
           n=n&(n-1);
           ++k;
       }
       cout<<k<<"\n";
   }
}