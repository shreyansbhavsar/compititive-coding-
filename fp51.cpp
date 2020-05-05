// codecheaf 3 may 20 b
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,z,l,r;
        cin>>x>>y>>l>>r;
        z=x|y;
        int h=min(x,y);
        if(h==0)
        cout<<0<<endl;
        else if(z<=r)
        cout<<z<<endl;
        else
        {
            h=max(x,y);
            int s=log(h)+1;
            long long  p=powl(2,s)-1;
            if(((p|x) && (p|y) )||((r|x) && (r|y)))
                cout<<0<<endl;
            else
                cout<<p<<endl;
        }
    }
    return 0;
}