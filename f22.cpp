#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int n,zer=0,one=0;cin>>n;
for(int i=0;i<n;i++)
{
    int a;cin>>a;
    if(a%2)one++;
}
if(one==0||one==n)cout<<"YES\n";
else cout<<"NO\n";
}
return 0;
}