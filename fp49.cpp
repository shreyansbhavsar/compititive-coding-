#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        std::vector<int> v;
        std::vector<int> v1;
        int ans;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(i == 0)
            {
                v.push_back(1);
                ans = 1;
            }
            else
            {
                if(v[i] - v[i-1] <= 2)
                {
                    v.push_back(ans+1);
                    ans = ans+1;    
                }
                else
                {
                    v1.push_back(1);
                    v1.push_back(ans);
                    ans = 1;
                }
        }
        v1.push_back(ans);
        cout<<min(v1.begin(),v1.end())<<" "<<max(v1.begin(),v1.end())<<endl;

    }
}