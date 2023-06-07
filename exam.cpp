
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int x[10];
for(int i=0;i<10;i++)
{
cin>>x[i];
	}
	for	(int m=0;m<10;m++)
	{
		if(x[m]%2==0)
		cout<<x[m]<<" ";	
	}
	cout<<endl;
	for(int m=0;m<10;m++)
	{
		if(x[m]%2!=0)
		cout<<x[m]<<" ";
	}
	
}

