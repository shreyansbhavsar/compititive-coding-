#include<iostream>
using namespace std;

class counter
{
    private:
        unsigned int c;

    public:
        counter():c(0)  {}
        counter(int a):c(a) {}

        void display()
        {
            cout<<c<<endl;
        }
        counter operator ++()
        {
            /*counter temp;         //using temporary variable
            temp.c=++c;
            return temp;*/


            return counter(++c);    //without using temporary variable
        }
};

int main()
{
    counter c1(2),c2;

    c2=++c1;
    c2.display();

}
