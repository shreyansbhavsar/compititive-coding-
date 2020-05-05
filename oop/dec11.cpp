#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int t1,t2,t3,t4,t5,t6,t7,t8;
        t1=t2=t3=t4=t5=t6=t7=t8=0;
        int temp1,temp2;
        for(int i=0; i<N; i++)
        {
            cin>>temp1;
            cin>>temp2;
            if(temp1==1)
                if(temp2>t1)
                    t1=temp2;
            if(temp1==2)
                if(temp2>t2)
                    t2=temp2;
            if(temp1==3)
                if(temp2>t3)
                    t3=temp2;
            if(temp1==4)
                if(temp2>t4)
                    t4=temp2;
            if(temp1==5)
                if(temp2>t5)
                    t5=temp2;
            if(temp1==6)
                if(temp2>t6)
                    t6=temp2;
            if(temp1==7)
                if(temp2>t7)
                    t7=temp2;
            if(temp1==8)
                if(temp2>t8)
                    t8=temp2;
        }
        int sum=0;
        sum=t1+t2+t3+t4+t5+t6+t7+t8;
        cout<<sum<<endl;
    }
    return 0;
}
