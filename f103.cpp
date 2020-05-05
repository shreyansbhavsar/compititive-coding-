#include<bits/stdc++.h>
using namespace std;
int n,a[51],b[1001],t;
int main(){
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(b[a[i]]==0)++t;
		b[a[i]]=i;
	}
	cout<<t<<endl;
	for(int i=1;i<=n;++i)if(b[a[i]]==i)
    cout<<a[i]<<' ';
    return 0;
}