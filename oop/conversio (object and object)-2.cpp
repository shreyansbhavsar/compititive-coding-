#include<iostream>
using namespace std;

class time12
{
    private:
        bool pm;
        int hrs;
        int mins;
        int secs;

    public:
        time12():hrs(0),mins(0),secs(0),pm(true)  {}
        time12(int h,int m,int s,bool val):hrs(h),mins(m),secs(s),pm(val) {}

        void display()
        {
            cout<<hrs<<":"<<mins<<":"<<secs<<" ";
            if(pm)
                {cout<<"pm"<<endl;}
            else
                {cout<<"am"<<endl;}
        }
};

class time24
{
    private:
        int hour;
        int minute;
        int second;

    public:
        time24():hour(0),minute(0),second(0)  {}
        time24(int h,int m,int s):hour(h),minute(m),second(s) {}
        time24(time12 a)
        {
            if(a.pm)
            {
                hour=a.hrs+12;
            }
            else
            {
                hour=a.hrs;
            }

            minute=a.mins;
            second=a.secs;
        }

        void display()
        {
            cout<<hour<<":"<<minute<<":"<<second<<endl;
        }
};
int main()
{
    time12 a1(1,12,13,1),a2(2,34,1,0),a3;
    time24 b1(13,12,1),b2(15,4,8),b3;

    b3=a1;
    b3.display();
}

