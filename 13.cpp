#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system ("color f0");
	int a,b,c,x;
	cout<<"aX^ +bX + c = 0"<<endl;
	cout<<"Eter Three Values a and b and c"<<endl;
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	x=b*b-4*a*c;
	if (x==0)
	{
		cout<<"Found one Solution  :"<<endl;
		x=-b/2*a;
		cout<<x;
	}
	else if(x>0){
		cout<<"Tow Different Solution :"<<endl;
		x=-b-sqrt(x)/2*a;
		cout<<x<<endl;
		x=-b+sqrt(x)/2*a;
		cout<<x;
	}
	else
		cout<<"No solution";
return 0;
}


 






