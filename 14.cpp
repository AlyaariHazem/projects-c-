#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	system ("color f0");
	int a;
	cout<<"Enter the Degrees of the atmosphere : ";
	cin>>a;
	if(a<=13)
	cout<<"Cold";
	else if(a>=14 && a<=25)
	cout<<"Cool";
	else if(a>=26)
	cout<<"Hot";
	else
	cout<<"Error ";
}
