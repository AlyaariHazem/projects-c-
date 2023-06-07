#include<iostream>
using namespace std;
int main()
{
	system ("color f0");
	int n;
	cout<<"Enter your Grade : ";cin>>n;
	cout<<endl;
	if(n>=70 && n<=100)
	cout<<"Passed (^-^)";
	else if(n>=0 && n<=69)
	cout<<"Failed (>-<)";
	else
	cout<<"Invalid Number ";
return 0;
}
