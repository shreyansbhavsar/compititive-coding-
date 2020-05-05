#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
	int n;
 
	cin >> n;
 
	pair<ll,ll> a[n];
 
	for(int i = 0 ; i  < n ; i++){
		ll x;
		cin >> x;
		ll t = x;
		ll c = 0;
		while(t % 3 == 0){
			t /= 3;
			c++;
		}
		a[i].first =- c;
		a[i].second = x;
	}
	sort(a,a+n);
	for(int i = 0 ;  i < n ; i++)
		cout<<a[i].second<<" ";
	return 0;
}