#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
int a[n],p[m];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int j=0;j<m;j++){
cin>>p[j];
}
sort(p,p+m);
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(a[p[j]]<a[p[j]-1]){
swap(a[p[j]],a[p[j]-1]);
}
}
}
if(is_sorted(a,a+n))
cout<<"YES"<<"\n";
else
cout<<"NO"<<endl;
}
}