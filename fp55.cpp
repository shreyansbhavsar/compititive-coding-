#include<iostream>
#include<cmath>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,z,l,r;
        cin>>x>>y>>l>>r;
        z=x|y;
        int x1=min(x,y);
        if(x1==0)
        cout<<0<<endl;
        else if(z<=r)
        cout<<z<<endl;
        else
        {
            x1=max(l,r);
            int x11=log2(x1);
            // cout<<x11;
            ll p=powl(2,x11)-1;
            cout<<p;
        }
    }
    return 0;
}