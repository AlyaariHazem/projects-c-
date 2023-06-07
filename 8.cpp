#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("color f0");
	float x1,x2;
	char opr;
	cout<<"+|-|*|/\n";
	cout<<"Enter the tow numbr :\n";
	cin>>x1>>x2;
	cout<<"Enter the opretion : \n";
	cin>>opr;
	if(opr=='+')
	cout<<x1<<"+"<<x2<<"="<<x1+x2;
	else if(opr=='-')
	cout<<x1<<"-"<<x2<<"="<<x1-x2;
	else if (opr=='*')
	cout<<x1<<"*"<<x2<<"="<<x1*x2;
	else if (opr=='/')
	cout<<x1<<"/"<<x2<<"="<<x1/x2;
	else
	cout<<"error";
	
return 0;
}


 



