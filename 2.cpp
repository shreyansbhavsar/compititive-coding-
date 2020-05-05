#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
	{
	    int l,hash=0;
	    char s[100];
	    cin>>s;
	    l=strlen(s);
	    for(int i=0;i<l;i++)
	    {
	        hash+=(int)s[i];
	    }
	    hash-=(l*97);
	    int flag=0;
	    for(int i=0;i<l;i++)
	    {
	       for(int j=i+1;j<l;j++)
	       {
	           if(s[i]==s[j])
	                flag=1;
	       }
	    }
	    char c[100];
	    strcpy(c,s);
	    c[l+1]='\0';
	    //int m=strlen(c);
	    if(flag==0)
	    {   
	        for(int i=0;i<l;i++)
	        {
	            for(int j=i+1;j<l;j++)
	            {
	                if((int)c[i]>(int)c[j])
	                {
	                    char t;
	                    t=c[i];
	                    c[i]=c[j];
	                    c[j]=t;
	                }
	            }
	        }
	        if(strcmp(c,s)==0)
	        {
	            c[l-1]=c[l-1]-1;
	            c[l-2]=c[l-2]+1;
	        }
	        cout<<hash<<" "<<c<<endl;
	    }
	    else
	    {
	        for(int i=0;i<l;i++)
	        {
	            for(int j=i+1;j<l;j++)
	            {
	                if((int)c[i]>(int)c[j])
	                {
	                    char t;
	                    t=c[i];
	                    c[i]=c[j];
	                    c[j]=t;
	                }
	            }
	        }
	        if(strcmp(s,c)==0)
	        {
	            c[0]=c[0]+1;
	            c[1]=c[1]-1;
	        }
	        cout<<hash<<" "<<c<<endl;
	    }
	    
	 
	}
	return 0;
}