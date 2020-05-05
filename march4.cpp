#include<bits/stdc++.h>
using namespace std;
int shrey();
int main()
{
    int T,i;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        shrey();
    }
}
int shrey()
{

            int n,q,counter;
            cin>>n>>q;
            int a[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
            for(int i=0;i<q;i++)
            {
                int x1,x2,y,X1,X2;
                cin>>X1>>X2>>y;
                x1=X1-1;
                x2=X2-1;
                int counter=0;
                for(int j=x1;j<x2;j++)
                {
                    if(y>a[j] && (a[j+1]>y||a[j+1]==y))
                    {
                        counter++;
                    }
                    else if(y<a[j] && (a[j+1]<y||a[j+1]==y))
                    {
                        counter++;
                    }
                    else if(y==a[j])
                    {
                        if(a[j+1]>y || a[j+1]<y)
                            {counter++;}
                        else if(a[j+1]==y)
                            {counter+=2;}
                    }
                }
                cout<<counter<<endl;
         }

}