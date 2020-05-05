#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long  n,k,flag=0,i,p;
        cin>>n>>k;
        long long  a[n],b[n];
        for ( i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        if(k==1)
        {
            cout<<"yes"<<endl;
        }
    
        else
        {
            while(1)
            {
                 int s = 0;
                for(i=0;i<n-k;i++)
                {
                    if(a[i] > a[k+i])
                    {
                        swap(a[i],a[i+k]);
                            s=1;  
                    }
                }
                if(s == 0)
                    break;
            }
                
                for(i=0;i<n-1;i++)
                {
                    if(a[i]>a[i+1])
                    {
                        cout<<"no"<<endl;
                        break;
                    }
                }
                if(i==n-2)
                    cout<<"yes"<<endl;
             
        }
    }
}