#include<iostream>
using namespace std;
int main()
{
	system ("color f0");
	float k , m;
	int s;
	cout<<"we introduced the body mass index\n\nthe following information from the artment of Health and Human ServicesNational Institutes of Health\nBMI VALUES\nUnderweight: less than 18.5\nNormal: between 18.5 and24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater\n";
	cout<<"\n Enter your Weight in Kilograms : ";cin>>k;
	cout<<"Enter your Height in Meters : ";cin>>m;
	s = k/m;
	switch(s)
	{
	
	case 15 ... 18:cout<<"Underweight. ";
	break;
	case 19 ... 24:cout<<"Normal. ";
	break;
	case 25 ... 29:cout<<"Overweight. ";
	break;
	case 30 ... 36:cout<<"Obese. ";
	break;
	default:
	cout<<"Not a Human ";}
	
	
return 0;
}


 



