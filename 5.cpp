#include<iostream>
using namespace std;
int main(int argc, char *argv)
{
	system("color f0");
	int x1,x2,x3,sum;
	cout<<"Enter three corners  \n";
	cin>>x1>>x2>>x3;
	sum=x1+x2+x3;
	if(sum==180)
	cout<<"It can be Formed as triangle\n";
	else 
	cout<<"Not a triangle\n";
	
return 0;
}


 



