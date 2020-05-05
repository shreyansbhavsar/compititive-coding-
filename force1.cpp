#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long  t,n,k,j=0;
 
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
       if(n%2==k%2)
        {
            if(n>=k*k)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}