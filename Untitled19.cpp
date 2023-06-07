#include<iostream>
using namespace std;
main()
{
    int coins;//done by E.Ayed Sailan
    int coins$,coins_saudi;
	cout<<"welcome to coins converter"<<endl;
	cout<<"press 1 to convert from $ to Yemeni Rial  "<<endl<<"press 2 to convert from Saudi Rial to Yemeni Rial";
	cout<<endl<<"press 3 to exit from the converter\t\b";
	cin>>coins;
	switch(coins){

	case 1:
    cout<<"enter the amount of coins($)";
    cin>>coins$;
    cout<<"coins in Yemeni Rial="<<coins$*600;
	break;
	
	
	case 2:
		cout<<"enter the amount of coins(Saudi)";
    cin>>coins_saudi;
    cout<<"coins in Yemeni Rial="<<coins_saudi*160;
		break;
		default:
		cout<<"\n bye";
	
	}return 0;
}