#include <bits/stdc++.h> 
using namespace std; 
int main() {
    
    int i,t;
    cin >> t;
    while(t--) {
        int n,ans; 
        cin >> n;
        int a[n];
        int p= 0;
        int p1 = 0, p2 = 0;
        
        for( i = 0; i < n; i++) {
            cin>>a[i];
            if(p < a[i])
                p = a[i];
        }
        for(i = 0;i<n;i++) {
            if(p==a[i] ) {
                p1 = i; 
                break;
            }
        }
        
        for(i= n-1;i>= 0;i--) {
            if(p == a[i] ) {
                p2 = i;
                break;
            }
        }
         ans =p2 - p1;
        int answer = max(0,(n/2 -ans));
        cout<<answer<<endl;
        

    }

    return 0;
}