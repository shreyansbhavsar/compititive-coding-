#include <iostream>
#include <string.h>
using namespace std;
class string1
{
    char name[20];
public:
    string1(){}
    string1(char str[])
    {
        strcpy(name,str);
    }
    int operator ==(string1 s2)
    {
        if(strcmp(s2.name,name)>0)              //different>0
        {
            return 1;
        }
        else
            return 0;                           //same
    }
};
int main()
{
    string1 s1("Hello");
    string1 s2("Hello");
    if(s1==s2)
    {
        cout <<"Different";
    }
    else
        cout <<"same";
    return 0;
}
