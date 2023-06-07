#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	system ("color f9");
	int a1,a2,a3,a4,a5;

    int av; 

    cout<<"Enter your Subjects Degrees\n";
    cout<<"Quran : ";cin>>a1; 

    cout<<"Arabic : ";cin>>a2;
    cout<<"Mathematics : ";cin>>a3;
    cout<<"physics : ";cin>>a4;
    cout<<"English : ";cin>>a5;

    av=(a1+a2+a3+a4+a5)/5; 

    cout<<"Average= :"<<av<<endl; 

    switch(av)
    {

    case 90 ... 100 :cout<<"Excellent"; 

    break;
    case 75 ... 89:cout<<"V.Good"; 

    break;
    case 66 ... 74:cout<<"Good"; 

    break;
    case 50 ... 65:cout<<"Accept"; 

    break;
    case 1 ... 49:cout<<"Failur"; 

    break;
    default:
    cout<<"Invalid values ";
    }
 return 0;
	
}