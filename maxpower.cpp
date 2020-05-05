#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    char a[n+1];
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[n-i-1]=='1') break;
    }
    cout<<i;
}
