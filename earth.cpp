#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0;
        cin>>n;
        while(n>6)
        {
            n=n-6;
            i++;
        }

        if(n==1)
        {
            if(i>0)
            {        
                cout<<i*6+12<<" "<<"AS"<<endl;;
            }
            else
            {
                cout<<12<<" "<<"AS"<<endl;
            }
        }
       else if(n==2)
        {
            if(i>0)
            {        
                cout<<i*6+11<<" "<<"MS"<<endl;;
            }
             else
            {
                cout<<11<<" "<<"MS"<<endl;
            }
        }
         else if(n==3)
        {
            if(i>0)
            {        
                cout<<i*6+10<<" "<<"WS"<<endl;;
            }
             else
            {
                cout<<10<<" "<<"WS"<<endl;
            }
        }
         else if(n==4)
        {
            if(i>0)
            {        
                cout<<i*6+9<<" "<<"AS"<<endl;;
            }
             else
            {
                cout<<9<<" "<<"AS"<<endl;
            }
        }
        else if(n==5)
        {
            if(i>0)
            {        
                cout<<i*6+8<<" "<<"MS"<<endl;;
            }
             else
            {
                cout<<8<<" "<<"MS"<<endl;
            }
        }
         else if(n==6)
        {
            if(i>0)
            {        
                cout<<i*6+7<<" "<<"WS"<<endl;;
            }
             else
            {
                cout<<7<<" "<<"WS"<<endl;
            }
        }
    }
}