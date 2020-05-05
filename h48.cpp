#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       ll a[n];
       cin>>a[0];
       ll c=1;
       for(ll i=1;i<n;i++){
           cin>>a[i];
           if(a[i]<=a[i-1]){
               c++;
           }
            else{
                a[i]=a[i-1];
            }
       }
       cout<<c<<endl;
    }
}