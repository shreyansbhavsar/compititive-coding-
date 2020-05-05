#include<bits/stdc++.h>
using namespace std;
int shrey();
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int r,c;
        cin>>r>>c;
        if(r==1 && c==1)
        {
            cout<<49<<endl;
            shrey();
        }
        else if(r==c && r==c!=1)
        {
            cout<<50;
            cout<<1<<" "<<1<<endl;
            shrey();
        }
        else
        {
            int s;
            s=(r+c)/2;
            cout<<51<<endl;
            cout<<s<<" "<<s<<endl;
            cout<<1<<" "<<1<<endl;
            shrey();
          }
    }
}
int shrey()
{
 cout<<2<<" "<<2<<endl;
 cout<<3<<" "<<1<<endl;
 cout<<4<<" "<<2<<endl;
 cout<<5<<" "<<1<<endl;
 cout<<6<<" "<<2<<endl;
 cout<<7<<" "<<1<<endl;
 cout<<8<<" "<<2<<endl;
 cout<<7<<" "<<3<<endl;
 cout<<6<<" "<<2<<endl;
 cout<<5<<" "<<3<<endl;
 cout<<4<<" "<<2<<endl;
 cout<<3<<" "<<3<<endl;
 cout<<2<<" "<<2<<endl;
 cout<<1<<" "<<3<<endl;
 cout<<2<<" "<<4<<endl;
 cout<<3<<" "<<3<<endl;
 cout<<4<<" "<<4<<endl;
 cout<<5<<" "<<3<<endl;
 cout<<6<<" "<<4<<endl;
 cout<<7<<" "<<3<<endl;
 cout<<8<<" "<<4<<endl;
 cout<<7<<" "<<5<<endl;
 cout<<6<<" "<<4<<endl;
 cout<<5<<" "<<5<<endl;
 cout<<4<<" "<<4<<endl;
 cout<<3<<" "<<5<<endl;
 cout<<2<<" "<<4<<endl;
 cout<<1<<" "<<5<<endl;
 cout<<2<<" "<<6<<endl;
 cout<<3<<" "<<5<<endl;
 cout<<4<<" "<<6<<endl;
 cout<<5<<" "<<5<<endl;
 cout<<6<<" "<<6<<endl;
 cout<<7<<" "<<5<<endl; 
 cout<<8<<" "<<6<<endl;
 cout<<7<<" "<<7<<endl;
 cout<<6<<" "<<6<<endl;
 cout<<5<<" "<<7<<endl;
 cout<<4<<" "<<6<<endl;
 cout<<3<<" "<<7<<endl;
 cout<<2<<" "<<6<<endl;
 cout<<1<<" "<<7<<endl;
 cout<<2<<" "<<8<<endl;
 cout<<3<<" "<<7<<endl;
 cout<<4<<" "<<8<<endl;
 cout<<5<<" "<<7<<endl;
 cout<<6<<" "<<8<<endl;
 cout<<7<<" "<<7<<endl;
 cout<<8<<" "<<8<<endl;
}