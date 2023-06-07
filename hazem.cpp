
#include<iostream>
#include <string>
#include<conio.h>
#define studen 50
int x,m=0,max1,swap1,s[20];
struct student{
	char name[20];
	float mark;
}stud[studen];
//#include "hazem.h"
using namespace std;
void name_student();
float max_mark();
int main()
{
	int max1;
	
cout<<"How many students ? ";
cin>>x;

name_student();


cout<<endl;
cout<<"*****************************"<<endl;
cout<<"sorting is ";
for(int a=0;a<=x;a++)
{
	for(int i=0;i<=x;i++)
	if(stud[i].mark<=stud[i+1].mark)
	{
	swap1=stud[i].mark;
    stud[i].mark=stud[i+1].mark;
    stud[i+1].mark=swap1;
	}
}
cout<<"the max1 mark is  "<<stud[0].mark<<endl;
for(int i=0;i<x;i++)
{
	cout<<stud[i].mark<<"  ";
}
cout<<endl;
cout<<"all studens are : "<<endl;
	for(int a=0;a<x;a++)
	{
	cout<<stud[a].mark<<"  ";
	cout<<stud[a].name<<endl;
	}	
}
void name_student()
{
for(int i=0;i<x;i++)
{
	cin.ignore();
	cout<<"enter name student : ";
	cin.getline(stud[i].name,50);
	cout<<"enter mark : ";
	cin>>stud[i].mark;
}	
 }
 
// float max_mark()
// {
// for(int i=0;i<x;i++)
//  {
//  	max1=stud[i].mark;
//	if(max1<=stud[i+1].mark)
//	max1=stud[i+1].mark;
//   }
//   return max1;
// }
 
 
 
