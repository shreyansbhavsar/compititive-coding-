#include<iostream>
using naespace std;
int main()
{
    int n,d,i=0;
    cin>>n;
    cin>>d;
    int a[n];
    while(n--)
    {
        cin>>a[i];
        i++;
    }
    if(n==d)
    {
        for(i=n;i>0;i++)
        {
            cout<<a[i];
        }
    }
    else 
    {
        while(d--)
        {
            for(i=0;i<n;i++)
            {
                if(i==n)
                {
                 a[n]=a[0];
                }
                else
                {
                    a[i]=a[i-1];
                }
            }
        }
    }s
}