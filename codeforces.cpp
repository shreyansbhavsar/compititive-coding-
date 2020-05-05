#include<iostream>
using namespace std;
int n,a[5000];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    if(a[a[a[i]]]==i)
    return !printf ("YES");
    printf ("NO");
}
