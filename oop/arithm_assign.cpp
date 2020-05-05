
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

        void display()
        {
            cout<<"feet:"<<feet<<endl;
            cout<<"inch:"<<inch<<endl;
        }
        void operator +=(dist d1)
        {
            feet+=d1.feet;
            inch+=d1.inch;

            feet+=inch/12;
            inch=inch%12;
        }
};

int main()
{
    dist d1(10,11),d2(12,10),d3;

    d1+=d2;

    d1.display();

}
