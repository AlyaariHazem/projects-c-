#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <conio.h>
int count=3;
using namespace std;
struct product{
	string name;//variable to give us name
	float price;//variable to price
	string quantites;//variable to 
}  product;//opject from struct
//int ext();
void delete_item();
float add_item();
void seartch_item();
void edit_item();
//void back_to_suprmarket();
void display_item();
void sort_item();
void buy_item();

main()
{
	int x;
  ext:
	string name,seartch_name;
	  char enter_number,o;
 star:system("cls");system("color 7");
	cout<<"\n--------------------------"<<"YOU ARE IN SUPERMARDET city_mart -------------------\n"<<endl;
	cout<<" Data loaded Successfully: \n"<<endl;
	cout<<"                                        SUPERMARKET DATADBASE "<<endl;
	cout<<"1. New item"<<endl;
	cout<<"2. Delete item"<<endl;
	cout<<"3. Edit item"<<endl;
	cout<<"4. sort item"<<endl;
	cout<<"5. Display item"<<endl;
	cout<<"6. Back to suprmarkets MENU"<<endl;
	cout<<"7. Exit item"<<endl;
	cout<<"8. search for an item"<<endl;
x:  
    enter_number=getch();
	switch(enter_number)
	{
		int z;
		case '1':
	  z= add_item();
		if(z=='6')
		goto star;
		//ext();
			     break;
		case '2': 
			delete_item();
			     break;
		case '3':
			 edit_item(); 
				 break;
		case '4':
		sort_item();    
			      break;
		case '5':
			 display_item();
			      break;
		case '6':
			goto star;
			//back_to_suprmarket();
			      break;
		case '7':
			goto end;//ext();
			      break;
		case '8':
			seartch_item();
			break;	      
		default:
			{
			cout<<"you entered number or charactors invalid : "<<endl;
		  enter_number=0;
			goto x;//go to x   for enter name again becuase user entered name valiad 
			}		 
	}
	cout<<"\n"<<endl;
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                  exit or go to back                        *"<<endl;
	cout<<"               **************************************************************"<<endl;
	char n;
	cout<<"\nnow:\n if you want to exit press 7:"<<setw(6)<<"   or  press 6 if you want to go to  Back to suprmarkets MENU: "<<endl;
 s: n=getch();
	if(n=='6')
	 goto star;
	else if(n=='7')
	goto end;
	else
	 {
	  cout<<setw(8)<<"sorry! \n  you entered number invalid     try again : "<<endl;
	  goto s;
	 }
end:  cout<<"***********************************************************\n"<<"see you later  : "<<endl; 
      	  
	return 0;
}


float add_item()
{    
    char x;
     system("cls");
     system("color 6");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                       add item                             *"<<endl;
	cout<<"               **************************************************************"<<endl;

     //whan you use getline to enter string you must write before getline 
 again: cout<<"enter name product:\t "<<endl;
     getline(cin,product.name);//getline ignore space   getline get line from begaining to end whan you enter any thing 
     cout<<"enter price : \t"<<endl;
     cin>>product.price;
     cout<<"How many product "<<endl;
	 cin>>product.quantites;
	
	 ofstream prod;
	 //ifstream inprod("hazem.txt");
 ofstream outprod("hazem.txt",ios::app);//open file  
	 outprod<<product.name<<setw(8);//write in file name not in consul
 	outprod<<product.price<<setw(8);//write in file price not in consul
 	outprod<<product.quantites<<setw(9)<<endl;
		outprod.close();//close the file you must close the file 
		cout<<"*****************************************"<<endl;
		cout<<"you entered item ";
		outprod.close();
		cout<<"successful: \n "<<"product's name  "<<product.name<<endl;
		cout<<"product's price   "<<product.price<<endl;
		cout<<"product's quantites   "<<product.quantites<<endl;
		cout<<"*******************************************"<<endl;
        cout<<"press 1 to add item again  "<<endl;
        x=getch();
        cout<<endl;
        cin.ignore();
        if(x=='1')
        goto again;
        
        return x;
	//	ext();//to ext program or go to first program 		
}

void seartch_item()
{
	char scan='0';
	string name,price,quantite;
	   system("cls");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                     seartch item                           *"<<endl;
	cout<<"               **************************************************************"<<endl;
	cout<<"enter the product is name : "<<endl;
	  getline(cin,product.name);
	  
	  ifstream seartch_item("hazem.txt");
	  if(seartch_item.fail())
	  {
	  	system("color 4");
	  	cout<<"error found in the file : "<<endl;
	  	exit(1);
	        }
	  string all_products[50];
	  for(int i=0;i<50;i++)
	  {
	  	seartch_item>>all_products[i];
   	  }
	  for(int i=0;i<50;i++)
	  {
	  	if(product.name==all_products[i])
	      {
	      	name=all_products[i];
	      	price=all_products[i+1];
	      	quantite=all_products[i+2];
	      	scan='1';
		  }
	      
	     }
		  if(scan=='1')
		  {	cout<<"\nfound it \n it is "<<name<<"\n and price is " <<price<<"\n quantite is "<<quantite<<endl;	  }

		  else 
	  	system("cls");system("color 4");  cout<<product.name<<" wasn't found in the database :  "<<endl;
	     seartch_item.close();
	     
       // ext();//ext program or go to first program
}
void delete_item()
{
	char scan='0';
	  system("cls");
	  system("color 6");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                     delete item                            *"<<endl;
	cout<<"               **************************************************************"<<endl;
	int x=1;
	ifstream file("hazem.txt");
	string deleted;
	string line;
	cout<<"enter the name product that you want to delete : "<<endl;
	cin>>deleted;
	cin.ignore();
	system("color 1");
vector<string>s;
	while(file>>line)
	{
		s.push_back(line);
	}
		file.close();
	 ofstream file1("hazem.txt");
	  x=4;
	  int i=4;
	for(string item : s)
	{
		if(x!=1)
		{
	      if (item==deleted||x<=3)
	       {  
	           scan='1';
		       x--;
		      continue;
	        }
     	}
     file1<<item<<"    ";
   	 if(i%3==0)
     	file1<<"\n";
     i++;
	}
	if(scan=='1')
s:	cout<<deleted<<" is deleted : "<<endl;
	else
	{
		system("cls");
	 system("color 4");
	 cout<<deleted<<" is not found : "<<endl;
	}
	
	file1.close(); 
   // ext();//ext program or go to first program  
	} 
void edit_item()
{
	system("cls");
	system("color 6");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                       edit item                            *"<<endl;
	cout<<"               **************************************************************"<<endl;
  
	string name_edit,name,edi[50];
not_found: bool ch=false;
    cout<<"enter name that you want to edit it : "<<endl;
	cin>>name;
	ifstream edit("hazem.txt");
	for(int i=0;i<50;i++)
	{
		edit>>edi[i];
		
		if(name==edi[i])
		  ch=true;
		  
	}
	
	if(ch==false)
	{
		system("color c");
	cout<<"**************************************"<<endl;
	cout<<name<<" that you entered is not in file : \n"<<endl;
	goto not_found;
	}
	edit.close();
	system("cls");
	system("color 6");
	cout<<"Name that you enter is found in file \n"<<endl;
	cout<<"---  NOW  ---"<<endl;
	cout<<"enter name that you want to write it in the file : "<<endl;
	cin>>name_edit;
	cin.ignore();
	ofstream ed("hazem.txt");
	system("cls");	
	system("color 1");
	int m=1;
	for(int i=0;i<50;i++ && m++)
	{
	    if(m%3==0)
	    ed<<endl;
		if(name==edi[i])
		{
		 ed<<name_edit<<"     ";
		 i++; m++;		
		}
	   ed<<edi[i]<<"     ";
	}
	cout<<name<<" is deleted "<<" and added "<<name_edit<<endl;
	ed.close();
}
  
void display_item()
{
	string name,price,quantite;
	char scan='0';
	system("cls");
	system("color 6");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                     display item                           *"<<endl;
	cout<<"               **************************************************************"<<endl;
	string display[50],disp;
  cout<<"enter the name item that you want to display : "<<endl;
  cin>>disp;
  cin.ignore();	
	ifstream dis("hazem.txt");
	for(int i=0;i<50;i++)
	{
		dis>>display[i];
	}
	for(int i=0;i<50;i++)
	{
		if(disp==display[i])
				      {
	      	name=display[i];
	      	price=display[i+1];
	      	quantite=display[i+2];
	      	scan='1';
		  }
	//ext();//ext program or go to first program
	}
	
	if(scan=='1')
	{
		system("color 1");
		cout<<"*******************************";
	 cout<<"found it :\n"<<"the name item is      "<<name<<"\n"<<"the price is          "<<price<<"\n"<<"the number is          "<<quantite<<endl;
	}
	else 
	{
	    system("cls");
		system("color 4");
		cout<<"not found : "<<endl;
	}
	dis.close();
	
  }
  void sort_item()
{        system("cls");
        system("color 1");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                      sort item                             *"<<endl;
	cout<<"               **************************************************************"<<endl;
	string line;
	ifstream sort("hazem.txt");
	if(sort.is_open())
	{
		while(getline(sort,line))
		{
		cout<<line<<endl;
		}
		
	}
    sort.close();
  //ext();//ext program or go to first program	
}
void buy_item()
{
	
}

//int ext()
//
//{    
//cout<<"\n"<<endl;
//	cout<<"               **************************************************************"<<endl;
//	cout<<"               *                  exit or go to back                        *"<<endl;
//	cout<<"               **************************************************************"<<endl;
//	char x;
//	cout<<"\nnow if you want to exit press 7:"<<setw(6)<<"   or  press 6 if you want to go to  Back to suprmarkets MENU: "<<endl;
// s: x=getch();
//	if(x=='6')
//	{
//	 return 6; 
//	}
//	else if(x=='7')
//	{
//		return 7;
//	}
//	
//	else
//	
//	 cout<<setw(8)<<"sorry! \n  you entered number invalid     try again : "<<endl;
//	 goto s;
//	
//	
//}
//void sort_item()
//{
//int arr[50];
//	ifstream sort("hazem.txt");
//	sort.read((char*)&arr,sizeof(int)*10);
//	for(int i=0;i<50;i++)
//	{
//		cout<<arr[i]<<"  "<<endl;
//	}
//	sort.close();
//	
//}


