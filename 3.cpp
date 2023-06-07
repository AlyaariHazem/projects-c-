#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("color f0");
	char a;
	cout<<"Enter a Key form the Keyword : ";
	cin>>a;
	switch(a)
	{
		case 65 ... 90:cout<<"\It is a Character. ";
		break;
		case 92 ... 122:cout<<"\It is a Character. ";break;
		case 48 ... 57:cout<<"\It is a Number. ";
		break;
		default:
		cout<<"It is a symbol "; 
		
	}
	
	
return 0;
}