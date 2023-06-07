#include <iostream>
#include <vector>
#include <fstream>
using  namespace std;
struct product1{
	string name;//variable to give us name
	int price;//variable to price
	int quantites;//variable to 
}  product;//opject from struct
main()
{
	system("cls");
	system("color 6");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                       edit item                            *"<<endl;
	cout<<"               **************************************************************"<<endl;
  
	string name_edit,name;
    bool ch=false;
    cout<<"enter name that you want to edit it : "<<endl;
not_found: cin>>name;
	ifstream edit("text.txt");
	product1 edi;
	vector<product1> edit1;
	while(edit>>edi.name)
	{
		edit>>edi.price;
		edit>>edi.quantites;
		if(edi.name==name)
		ch=true;
		edit1.push_back(edi);
	}
	
	if(name=="6")
	return 6;
	
	if(ch==false)
	{
		system("color c");
		system("cls");
		cout<<"sorry ! "<<endl;
	cout<<name<<" is not in file enter  name agian : \n\n\n\n 6 go to back :  ";
	goto not_found;
	}
	edit.close();
		cout<<"Name that you entered is found in file \n"<<endl;
	cout<<"---  NOW  ---"<<endl;
	cout<<"enter name that you want to write it in the file : "<<endl;
	cin>>name_edit;
	cout<<"enter the price quntitie : "<<endl;
	string  price_edit,quntities;int price;
	 cin>>price;
	cout<<"enter the quntities products : "<<endl;
	cin>>quntities;
	cin.ignore();
	ofstream ed("text.txt");
	system("cls");	
	system("color 1");
	int m=1,r=1;
	for(int i=0;i<edit1.size();i++ && m++)
	{
		cout<<i<<endl;
//	    if(m%3==0)
//	    ed<<endl;
//		if(name==edi.name&&r==1)//r=1 to enter one to condition
//		{
//		 ed<<name_edit<<"     "<<price<<"     "<<quntities<<endl;
//		 r--;		
//		}
}}
