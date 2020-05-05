#include <iostream>
using namespace std;
int main()
{
    long long int a[10][10], c=90, n, s;
    cin>>n;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cin>>a[i][j];
        }
    }
    n = (n*(n-1))/2;
    for(int i=0; i<9; i++)
    {
        for(int j=1; j<10; j++)
        {
            for(int k=i+1; k<10&&a[i][j]!=0; k++)
            {
                if(a[i][j]==a[k][0])
                {
                    for(int l=1; l<10; l++)
                    {
                        if(a[k][l]==a[i][0])
                        {
                            c--;
                            a[k][l]=0;
                        }
                    }
                }
            }
        }
    }
    cout<<(n-c);
}