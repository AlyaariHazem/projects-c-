#include<iostream>
using namespace std;
int main()
{
	system ("color f0");
	int a1,a2,b1,b2;
	cout<<"Enter the Height  :\n";
	cout<<"a1 = ";cin>>a1;
	cout<<"a2 = ";cin>>a2;
	if(a1==a2)
	{
		cout<<"Enter the Offer :\n";
		cout<<"b1 = ";cin>>b1;
    	cout<<"b2 = ";cin>>b2;
		if(a1&&a2==b1&&b2)
		cout<<"It is a Square ⬛ ";
		else
		cout<<"It is a rectangle ";
	}
	else
	cout<<"a1 and a2 must be equal ";
return 0;
}


 



