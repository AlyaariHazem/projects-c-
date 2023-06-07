#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
int count=3;
using namespace std;
struct product{
	string name;
	float price;
	string quantites;
}  product;

void add_item();
void seartch_item();
void edit_item();
void delete_item();
void display_item();
void sort_item();
void exit();
main()
{

	string name,seartch_name;

	  int enter_number;

	cout<<"----------------"<<"YOU ARE IN SUPERMARDET city_mart ----------------"<<endl;
	cout<<"Data loaded Successfully: \n"<<endl;
	cout<<"1. New item"<<endl;
	cout<<"2. Delete item"<<endl;
	cout<<"3. Edit item"<<endl;
	cout<<"4. sort item"<<endl;
	cout<<"5. Display item"<<endl;
	cout<<"6. Back to suprmarkets MENU"<<endl;
	cout<<"7. Exit item"<<endl;
	cout<<"8. search for an item"<<endl;
	
	cin>>enter_number;
	if(enter_number!=(1||2||3||4||5||6||7||8))
	{
	cout<<"sorry you entered number invilde or character! \n"<<endl;
	cout<<"-----plese enter number invilde : "<<endl;
	}
	switch(enter_number)
	{
		case 1:
		add_item();
			break;
		case 8:
			   seartch_item();
			       break;
		defualt: 
		       cout<<"sorry you entered number invilde or character! "<<endl;
	          cout<<"-----plese enter number invilde : "<<endl;
			       
	}
	return 0;
}
void add_item()
{    
     cin.ignore();
   		cout<<"enter name product:\t "<<endl;
     getline(cin,product.name);
	cout<<"enter price : \t"<<endl;
	cin>>product.price;
	cout<<"How many product "<<endl;
	  cin>>product.quantites;
	
	 ofstream prod;
 ofstream outprod("hazem.txt",ios::app);
	 outprod<<product.name<<"   ";
 	outprod<<product.price<<"      ";
 	outprod<<product.quantites<<"       "<<endl;
		outprod.close();
		cout<<"you entered item ";
		
}

void seartch_item()
{
	cout<<"enter the product is name : "<<endl;
	  getline(cin,product.name);
	  cout<<"enter price "<<endl;
	  cin>>product.price;
	  
	  ifstream seartch_text("hazem.txt");
	  if(seartch_text.fail()){
	  	cout<<"error found in the file : "<<endl;
	  	exit(1);
	        }
	  string all_products[50];
	  for(int i=0;i<50;i++)
	  {
	  	seartch_text>>all_products[i];
   	  }
	  for(int i=0;i<50;i++)
	  {
	  	if(product.name==all_products[i])
	      {    
	  		cout<<"\nfound it \n it is "<<all_products[i]<<"    "<<"and price is " <<all_products[i+1];
		  }
	  	
	     }
	  
	  
 
 	
};


