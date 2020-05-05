#include<iostream>
#include<string.h>
using namespace std;

class str
{
    private:
        char s[100];

    public:
        str()  {s[0]='\0';}
        str(const char a[])    {strcpy(s,a);}

        void display()
        {
            cout<<s<<endl;
        }

        str operator +(str &s1)
        {
            char temp[200];

            strcpy(temp,s);
            strcat(temp,s1.s);
            return str(temp);
        }
};

int main()
{
    str s1("kevin"),s2("jivani"),s3;

    s3=s2+s1;
    s3.display();

}

