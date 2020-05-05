#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
class person
{
protected:
    char name[10];
    int age;
public:
    person()
    {
        strcpy(name,"no name");
        age=0;
    }
    void getdata()
    {
        cout<<"NAME and AGE:"<<endl;
        cin>>name>>age;
    }
    void showdata()
    {
        cout<<"Name:"<<name<<"  "<<"Age:"<<age<<endl;
    }
    void storedata()
    {
        if(age==0)
            cout<<"Data isnt intialized."<<endl;
        else
        {
            ofstream fout;
            fout.open("abc.txt",ios::app | ios::binary);
            fout.write((char *)this, sizeof(* this));
        }
      //  fout.close();
    }
    void viewdata()
    {
        ifstream fin;
        fin.open("abc.txt");
        if(!fin)
            cout<<"File not found"<<endl;
        else
        {
            fin.read((char *)this, sizeof(* this));
            while(!fin.eof())
            {
                showdata();
                fin.read((char *)this, sizeof(* this));
            }
        }
        fin.close();
    }
    
    void update()
    {
        char t[10];
        cout<<"Enter the name to be updated:";
        cin>>t;
        fstream file;
        file.open("abc.txt",ios::out| ios::in| ios::binary| ios::ate);
        file.seekg(0);
        file.read((char *)this, sizeof(* this));
        while(!file.eof())
        {
            if(!strcmp(t,name))
            {
                getdata();
               file.seekp((file.tellg()) - (sizeof(*this)));
                file.write((char *)this, sizeof(* this));
            }
            file.read((char *)this, sizeof(* this));
        }
        file.close();
    }
};

int main()
{
    person p1;
    p1.getdata();
    p1.storedata();
    p1.viewdata();
    p1.update();
    p1.viewdata();
    return 0;
}

