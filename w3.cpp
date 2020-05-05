#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ll n,i,a;
 
      cin>>n;
 
      ll ara[n+1];
 
      for(int i=0;i<n;i++)
      {
          cin>>ara[i];
      }
 
     vector<ll>v;
 
     map<ll,ll>mp;
 
     for(i=n-1; i>=0; i--)
     {
 
         if(mp[ ara[i]]==0)
         {
         v.push_back(ara[i]);
 
         }
          mp[ara[i]]++;
 
     }
     cout<<v.size()<<endl;
     for(int i=v.size()-1;i>=0;i--)
     {
         cout<<v[i]<<" ";
     }
 
}