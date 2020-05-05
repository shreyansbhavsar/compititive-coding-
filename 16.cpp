#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        int i=0;
        while(n==0)
        {
            if(n<(2^i))
            {
                n=n-(2^i);
                s=s+i;
                i++;
            }
        }
        cout<<s<<endl;
    }
}