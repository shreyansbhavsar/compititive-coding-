#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        int n;
        cin>>n;
        int a[n];
        // std::vector<int> v;
        // std::vector<int> v1;
        int ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int min1=1000,max1=-1;
        for(i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])<=2)
            {
                ans = ans+1;
            }
            else
            {
                if(ans<=min1)
                {
                    min1 = ans ;
                }
                if(ans>=max1)
                {
                    max1 = ans ;
                }
                ans = 0;
            }

        }
        if(ans<=min1)
        {
            min1= ans;
        }
        if(ans>=max1)
        {
            max1=ans;
        }
        
        cout<<min1+1<<" "<<max1+1<<endl;
    }
}