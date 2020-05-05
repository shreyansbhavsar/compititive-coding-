#include <iostream>
int sum;
using namespace std;
struct data
{
    char name[10];
    int rollno;
    int marks[5];
    void input()
    {
        int i;
        sum=0;
        cin>>name>>rollno;
        for(i=0;i<5;i++)
        {
            cin>>marks[i];
            sum += marks[i];
        }
    }
    void display()
    {
        cout<<name<<"  "<<sum;
    }
    
}b1;
int main()
{
    b1.input();
    b1.display();

    return 0;
}
