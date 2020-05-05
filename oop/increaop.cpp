#include <iostream>
#include <iomanip>
using namespace std;
class date
{
    int day;
    int month;
    int year;
public:
    date() {}
    void get()
    {
        cout<<"Enter day,month,year:"<<endl;
        cin>>day>>month>>year;
    }
    void display()
    {
        cout<<day<<" / "<<month<<" / "<<year<<endl;
    }
    int operator ++()
    {
        if(day==31 && month==12 )
        {   year++;
            day=1;
            month=1;
        }
        if(day==28 && month== 2)
        {
            if(year%4==0)
            {
                day++;
            }
            else
            {
                day=1;
                month++;
            }
        }
        if(day==29 && month ==2)
        {
            if(year%4==0)
            {
                day=1;
                month++;
            }
            else
            {
                cout<<"Invalid date"<<endl;
            }
        }
        if(day==30 || day==31)
        {
            if(day==30)
            {
                if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
                {
                    day++;
                }
                else
                {     month++;
                    day=1;
                }
            }
            if(day==31)
            {
                    if(month==1||month==3||month==5||month==7||month==8||month==10)
                    {
                        day=1;
                        month++;
                    }
                    else
                    {
                        cout<<"Invalid date"<<endl;
                        }
            }
        }
        else
        {
            day++;
        }
        
    }
};
int main()
{
    date d1;
    d1.get();
    ++d1;
    d1.display();
}
