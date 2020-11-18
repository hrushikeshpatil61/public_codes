#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

typedef struct student
{
	int roll;
	char a,name[20],add[30];
}stud;

void create();
void display();
void insert();
void search(int key);
void modify(int key);



int main()
{
	int ch,x;
	do{
		cout<<"\n\t***MENU\n1.Accept\n2.Display\n3.Insert\n4Search\n5.Delete\n6Modify\n7.Exit\nEnter your choise=";
		cin>>ch;
		switch(ch)
		{
			case 1:create();
						break;
			case 2:display();
						break;
			case 3:insert();
						break;
			case 4:cout<<"enter roll no to search=";
						cin>>x;
						search(x);
							break;
			case 5:cout<<"enter roll no to delete=";
						cin>>x;
						delete(&x);
							break;
			case 6:cout<<"enter rollno to modify=";
						cin>>x;
						modify(x);
							break;
 
			default:"enter correct choise......\n";
			}
	}while(ch!=7);
	
	return 0;
}

ifstream fin;
ofstream fout;
fstream fm;
int n;
char fname[20];

void create()
{
	int i;

	stud s;
	cout<<"enter name of the file=";
	cin>>fname;
	fm.open(fname,ios::out);
	cout<<"\nenter no. of records:=";
	for(i=0;i<n;i++)
	{
		cout<<"enter roll no=";
		cin>>s.roll;
		cout<<"enter name";
		cin>>s.name;
		cout<<"enter division";
		cin>>s.a;
		cout<<"enter address=";
		cin>>s.add;
		fm.write((char*)&s,sizeof(s));
	}
fm.close();

}//create
void display()
{
	int i;
	stud s;
	fin.open(fname);
	cout<<"\nROLL NO\tNAME\tDIV\tADDRESS";
	for(i=0;i<n;i++)
	{
		fin.read((char*)&s,sizeof(s));
		cout<<"\n"<<s.roll<<"\t"<<s.name<<"\t"<<s.a<<"\t"<<s.add;
	}
fin.close();

}

void modify(int key)
{
	stud s;
	int flag=0,i;
	fin.open(fname);
	fout.open("temp.txt",ios::out);
	for(i=0;i<n;i++)
	{
		fin.read((char *)&s,sizeof(s));
		if(s.roll==key)
		{
			cout<<"enter roll no.=";
			cin>>s.roll;
			cout<<"enter name";
			cin>>s.name;
			cout<<"enter division=";
			cin>>s.a;
			cout<<"enter address=";
			cin>>s.add;
			fout.write((char*)&s,sizeof(s));
			flag = 1;
		}
		else
		{
			fout.write((char*)&s,sizeof(s));
		}
	}
	if(flag==0)
	cout<<"\nRoll No.= "<<key<<" is not present in the record";
	fin.close();
	fout.close();
	remove(fname);
	rename("temp.txt",fname);
}


void delete1(int key)
{
	stud s;
	int flag=0,i;
	fin.open(fname);
	fout.open("temp.txt",ios::out);
	for(i=0;i<n;i++)
	{
		fin.read((char *)&s,sizeof(s));
		if(s.roll==key)
		{
			cout<<"\nrecord deleted successfully";
			flag=1;
		}
		else
		{
			fout.write((char *)&s,sizeof(s));
			
		}
	}
	if(flag==0)
	cout<<"\n/Roll no.= "<<key<<" is not present in the record";
	else
	n--;
	fin.close();
	fout.close();
	remove(fname);
	rename("temp.txt",fname);
}


void search(int key)
{
	stud s;
	int flag =0,i;
	fin.open(fname);
	for(i=0;i<n;i++)
	{
		fin.read((char *)&s,sizeof(s));
		if(s.roll=key)
		{
			cout<<"\nrecord is present their corrensponding details are:\nroll no=";
			cout<<s.roll<<"\nName="<<s.name<<"\nDivision="<<s.a<<"address="<<s.add;
		}
	}
	if(flag==0)
	cout<<"\nRoll no.= "<<key<<" is not present in the record";
	fin.close();
}

void insert()
{
	stud s;
	fout.open(fname, ios::app);
	cout<<"Enter roll no=";
	cin>>s.roll;
	cout<<"Enter name=";
	cin>>s.name;
	cout<<"Enter division=";
	cin>>s.a;
	cout<<"enter address=";
	cin>>s.add;
	fout.write((char*)&s, sizeof(s));
	n++;
	fout.close();
}











