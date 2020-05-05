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
        dist operator +(dist d1)
        {
            int i=inch+d1.inch;
            int f=i/12+feet+d1.feet;

            i=i%12;

            return dist(f,i);
        }
};

int main()
{
    dist d1(10,11),d2(12,10),d3;

    d3=d1+d2;

    d3.display();

}
