#include<iostream>
using namespace std;
int main()
{
	system ("color f0");
	int x;
    cout<<"Enter a Number from 1 to 7 : ";
    cin>>x;cout<<endl;
    if(x==1)
		cout<<"Saturday";
	else if(x==2)
		cout<<"Sunday";
		else if(x==3)
		cout<<"Monday";
	else if(x==4)
		cout<<"Tuesday";
	else if(x==5)
		cout<<"Wednesday";
	else if(x==6)
		cout<<"Thursday";
	else if(x==7)
		cout<<"Friday";
	else
	    cout<<"Error";
return 0;
}
