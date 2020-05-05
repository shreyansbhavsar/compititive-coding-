#include<iostream>
#include<string.h>
using namespace std;
class s
{
	char *str;
public:
s(char *s1)
{
	int l;
	l=strlen(s1);
	str=new char[l+1];
	strcpy(str,s1);
}
~s()
{
	delete[] str;
}
void show()
{
	cout<<str;
}
};
int main()
{
	s s1 ="princy shreyans bhavsar";
	s1.show();
	return 0;
}