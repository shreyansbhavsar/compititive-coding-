#include<bits/stdc++.h>
using namespace std;
 
inline void input(long long *n)
{
    register char c=getchar_unlocked();
    *n=0;
    for(;(c<'0'||c>'9');c=getchar_unlocked());
    for(;(c<='9'&&c>='0');c=getchar_unlocked()){
        *n=*n*10+c-48;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long t;
    input(&t);
    while(t--)
    {
        long long n;
        input(&n);
        long long a[n],r=0,x=0;
        long long max ;
        for(long long i = 0 ; i < n; i++)
            input(&a[i]);
                
        for(long long i = 0 ; i < n; i++)
        {
            x = x ^ a[i];
        }
        max = x;
        long long ans=0;
        
        for(long long i = 0 ; i<n; i++)
        {
                r = r^a[i];
                ans = r & (r^x);
                if(ans>max)
                    max = ans;
            
        }
       
        cout<<(max)<<"\n";
            
 
    }
}
