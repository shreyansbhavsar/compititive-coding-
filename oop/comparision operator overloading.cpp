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

        int operator < (dist &d1)
        {
            if(feet*12+inch<d1.feet*12+d1.inch) {return 1;}
            else {return 0;}
        }
};

int main()
{
    dist d1(11,11),d2(12,10),d3;

    if(d1<d2)   {cout<<"d1 is smaller";}
    else        {cout<<"d2 is smaller";}
}
