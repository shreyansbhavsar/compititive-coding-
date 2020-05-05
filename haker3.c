#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max_of_four(int a, int b, int c, int d){

    if (a > b && a > c && a >d)
    return a;
    else if  (b > a && b > c && b >d)
    return b;
     else if  (c > a && c > b && c >d)
    return c;
     else  if (d > a && d > c && d >b)
    return d;
    else 
    return 0;
}
int main()
{
    int a,b,c,d,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    f=max_of_four(a,b,c,d);
    printf("%d",f);
}