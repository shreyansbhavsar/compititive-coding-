#include<bits/stdc++.h>
using namespace std;
int shrey (int n);
/*void fastcan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
}*/ 
int main()
{
	int t;
	fastcan(t);
	while(t--)
	{
		int n,q,p,temp,e=0,o=0;
		fastcan(n);
		fastcan(q);
		int a[n],b[n],i;
		for(i=0;i<n;i++)
		{
			fastcan(a[i]);
		}
		for(i=0;i<n;i++)
		{
			temp=shrey(a[i]);
			if((temp%2)==0)
				e++;
			else
				o++;
		}
		while(q--)
		{
			fastcan(p);
			temp=shrey(p);
			if((temp%2)==0)
				printf("%d %d\n",e,o);
			else
				printf("%d %d\n",o,e);
		}
	}
	return 0;
}
int shrey (int n) 
{
    int count=0;
    if (n & (n-1) == 0)
    count=1;
    else
    {
    	while (n!=0)
    	{
        	n=n&(n-1);
        	count++;
    	}
    }
    return count;
}