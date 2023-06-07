#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("color f0");
	int x1,x2,x3,x4,sum;
	int a,b;
	cout<<"Enter Four corners  \n";
	cin>>x1>>x2>>x3>>x4;
	a=x1+x2;
	b=x3+x4;
	sum=a+b;
	if(a==b)
	cout<<"It can be Formed as Squer\n";
	else 
	cout<<"Not Squer ";
	
return 0;
}
