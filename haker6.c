#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int s=a+b+c;;
  if (n==1)
  return a;
  else if(n==2)
  return b;
  else if(n==3)
  return c;
  else{
      if(n==4)
      return s;
      else
      {
          n=n-1;
          a=b;
          b=c;
          c=s;
          find_nth_term(n,a,b,c);
      }

  }
  return 0;
}
int main()
{
    int a,b,c,d,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    f=find_nth_term(a,b,c,d);
    printf("%d",f);
}