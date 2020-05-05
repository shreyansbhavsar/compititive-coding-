#include<bits/stdc++.h>
using namespace std;
using ll=unsigned long long;
ll mod=1e9+7;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
	fast;
	int t;
	cin>>t;
	while(t--)
	{ int c=1;
	    string s;
	    cin>>s;
	    int n=s.length();
	    string s1,s2;
	    s1=s.substr(0,n/2);
	    if(n%2==0)
	    {
	        s2=s.substr(n/2,n/2);
	    }
	    else
	    s2=s.substr(((n/2) + 1), n/2);
	    sort(s1.begin(),s1.end());
	    sort(s2.begin(),s2.end());
	    
	    for(int i=0;i<(n/2);i++)
	    {
	        if(s1[i]!=s2[i])
	        {
	            cout<<"NO"<<"\n";
	            break;
	        }
	    }
	    if(c==1)
	    cout<<"YES"<<"\n";

	    
	}
	
	
	return 0;
}