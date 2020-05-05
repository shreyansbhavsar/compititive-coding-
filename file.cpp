#include<iostream>
#include<string.h>
#include<fstream.h>
using namespace std;
class book
{
	int id;
	char name[20];
	int price;
public:
	book()
	{
		id=0;
		strcpy(name,"notitle");
		price=0;
	}
	void get()
	{
		cin>>id;
		cin.getline(name,19);
		cin>>price;
	}
	void showdata()
	{
		cout<<id<<name<<price;
	}
	void storedata()
	{
		if(id==0 || price==0)
			cout<<"data is not inii";
		else
		{
			ofstream fout;
			fout.open("abc.txt",ios::app )
			fout.write((char*)this,sizeof(this));
			fout.close();
		}
	}
	void viewbook()
	{
		ifstream fin;
		fin.open("abc.txt");
		if(!fin)
			cout<<"file not found";
		else
		{
			fin.read((char*)this,sizeof(this));
			while(!fin.eof())
			{
				showdata();
				fin.read((char*)this,sizeof(this));
			}
		}
		fin.close();
	}
	void search(char*search title)
	{
		ifstream fin;
		fin.open("abc.txt");
		if(!fin)
			cout<<"file not found";
		else
		{
			fin.read((char*)this,sizeof(this));
			while(!fin.eof())
			{
				f=0;
				if(!strcmp(name,search title))
				{
					showdata();
					cout<<"match";
					f=1;
					break;
				}
				fin.read((char*)this,sizeof this);
			}
			if(f==0)
			{
				cout<<"not match";
			}
		}
		fin.close;
	}
	void update(char *t)
	{
		fstream file;
		file.open("abc.txt",ios::app);
		file.seekg(0);
		file.read((*char)this,sizeof this);
		while(!file.eof())
		{
			if(!strcmp(t,title))
			{
				getdata();
				file.seekp(file.tellg()-sizeof(*this));
				file.write((char*)this,sizeof this);
			}
			file.read((*char)this,sizeof this);
		}
		file.close();
	}
	void delete(char *t)
	{
		ifstream fin;
		ofstream fout;
		fin.open("abc.txt");
		if(!fin)
		{
			cout<<"not found";
		}
		else
		{
			fout.open("tfile.data");
			fin.read((char*)this,sizeof this);
			while(!file.eof())
		{
			if(!strcmp(t,title))
			{
				fout.write((char*)this,sizeof this);
			}
			file.read((*char)this,sizeof this);
		}
		file.close();
		remove("abc.txt");
		rename("tfile.data","file1.data");
		}
	}
};