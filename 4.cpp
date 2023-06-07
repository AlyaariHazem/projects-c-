#include<iostream>
using namespace std;
int main(int argc, char *argv)
{
	system("color f0");
	char x;
	cout<<"Enter the a Key from the Keybord :";
	cin>>x;
	if((x>=48)&&(x<=57))
        cout<<"This is a Number\n";
    else if((x>=65)&&(x<=90)||(x>=97)&&(x<=122))
        cout<<"This is a Letter\n";
    else
        cout<<"This is Sign\n";	
		

return 0;
}
