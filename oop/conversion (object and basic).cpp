#include<iostream>
using namespace std;

class dist
{
    private:
        int feet;
        int inch;

    public:
        dist():feet(0),inch(0)  {}
        dist(int f,int i):feet(f),inch(i) {}
        dist(int m)                             //basic to user-defined
        {
            float f=m*3.28;

            feet=(int)f;
            inch=(f-feet)*12;
        }

        void display()
        {
            cout<<"feet:"<<feet<<endl;
            cout<<"inch:"<<inch<<endl;
        }

        operator float()                       //user-define to basic
        {
           float meter=(inch+feet*12)/(3.28*12);
           return meter;
        }
};

int main()
{
    dist d1(10,11),d2(12,10),d3(20);

    float k=d1;

    cout<<k;
}

