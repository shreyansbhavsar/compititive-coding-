#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int sumb=0,sumg=0,i,n;
scanf("%d",&n);
int a[n];
char c;
scanf("%c",&c);
for(i=0;i<n;i++)
{   
    scanf("%d",&a[i]);
    if(i%2==0)
    {
        sumg=sumg+a[i];
    }
    else
    {
        sumb=sumb+a[i];
    }

}
    if(gender='b')
    printf("%d",sumb);
    else
      printf("%d",sumg);
}