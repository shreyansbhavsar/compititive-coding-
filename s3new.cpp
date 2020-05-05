#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
	char *s="princy shreyans bhavsar";
	int len=strlen(s);
	char*p;
	p=new char[len+1];
	strcpy(p,s);
	coutt<<p;
	delete[] p;
	return 0;
}