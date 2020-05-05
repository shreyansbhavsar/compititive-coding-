#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,x=0,y=0;
       cin>>n;
       char a[n];
       cin>>a;
       for(int i=0;i<n;i++)
       {
           if(a[i]=='L')
           {
               x--;
               while(a[i]=='L' || a[i]=='R')
                   i++;
               i--;
           }
           else if(a[i]=='R')
           {
               x++;
               while(a[i]=='L' || a[i]=='R')
                   i++;
               i--;
           }
           else if(a[i]=='U')
           {
               y++;
               while(a[i]=='U' || a[i]=='D')
                   i++;
               i--;
           }
           else
           {
               y--;
               while(a[i]=='U' || a[i]=='D')
                   i++;
               i--;
           }
       }
       cout<<x<<" "<<y<<endl;
    }
    return 0;
}
