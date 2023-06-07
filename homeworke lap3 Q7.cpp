#include<iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
cout<<"Enter three integers\n";
cin>>a>>b>>c;
cout<<(a>=b && a>=c);	
cout<<(b>=a && b>=c);
cout<<(c>=a && c>=b);
	
	
	
	return 0;
}
