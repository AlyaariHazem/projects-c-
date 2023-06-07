#include "hazem.h"
using namespace std;

int main()
{
int x,m=0,max,swap,s[20];	
cout<<"How many students ? ";
cin>>x;
for(int i=0;i<x;i++)
{
	cout<<"enter name student : ";
	cin>>stud.name;
	cout<<"enter mark : ";
	cin>>stud.mark[i];
	m++;
	s[i]=stud.mark[i];
}



for(int i=0;i<=x;i++)
{
	for(int a=0;a<=x;a++)
	if(s[i]>s[i+1])
	{
	swap=s[i];
s[i]=s[i+1];
s[i+1]=swap;
	}
}
for(int i=0;i<=m;i++)
{
	
	if(s[i]<s[i+1])
	max=s[i+1];
  
}
cout<<endl;
cout<<"the max mark is  "<<max<<endl;
cout<<"sorting is ";
for(int i=0;i<m;i++)
{
	cout<<s[i]<<" ";
}
cout<<endl;
cout<<"all studens are : "<<endl;
	for(int a=0;a<x;a++)
	{
		
	cout<<stud.mark[a]<<"  ";
	cout<<stud.name[a]<<endl;
	
	}


	
}

