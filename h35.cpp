#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
            int n,limit=400,rs,l=0;
    string s;
    cin >> n >> s;
    if(s=="INDIAN") limit=200;
    for(i=0;i<n;i++){
        cin >> s;
        if(s == "CONTEST_WON"){
            cin >> rs; 
            l += (300 +  max(0,20-rs));
        }
        else if(s=="BUG_FOUND"){
            cin >> rs; // severity
            l += rs;
        }
        else if(s == "TOP_CONTRIBUTOR")
            l += 300;
        else
            l += 50;
    }
    cout << l / limit << endl ;
    }
    return 0;
}
