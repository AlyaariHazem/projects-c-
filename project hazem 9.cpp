#include <iostream>
#include <string>
#include <fstream>//library use the files
#include <stdlib.h>
#include <vector>//library use vector
#include <iomanip>//use fanction setw()
#include <conio.h>//use fanction exit()
#include <algorithm>
int count=3;
using namespace std;
struct product1{
	string name;//variable to give us name
	int price;//variable to price
	int quantites;//variable to 
}  product;//opject from struct
struct data_account{
	string account_name;
	string account_password;
	int account_money;
}All_data_account;
void delete_item();//fanction to delete item
float add_item();//fanction to add item
void seartch_item();
int edit_item();
//void back_to_suprmarket();
void display_item();
void sort_item();
void buy_item();
int users();
int chose();
void casher();
void account();
bool constrain_money(int&money);
string account_user;//use in casher and user fanctions
string account_admin,password_admin;
bool compare( product1 a, product1 b)//use in sort fanction
{
	return a.price<b.price;
}
bool constrain_price(int&price);
bool equal(string n,string a)
{
	return n==a;
}
main()
{
	int x;
  ext://when to press 6 pointer will go to ext 
	string name,seartch_name,user,password;
	  char enter_number,choose;
	  cout<<"1.admin \n2.user \n3.exit "<<endl;
	  choose=getch();
	  
	  if(choose=='1')
	  {
	  	system("cls");
	  	system("color 2");
        cout<<"  Hello \n please enter your account or  name : "<<endl;
x1:		cin>>account_admin;
		if(account_admin=="hazem")
		cout<<"  ";
		else
		{
			system("color 4");
			system("cls");
			cout<<"\n\n                     your account or name is Invalid  try again :"<<endl;
			goto x1;
		}
		system("cls");
		system("color 7");
		 cout<<" \n  your account is "<<account_admin<<endl;
		cout<<"\n\n               enter your password :     ";
y1:		cin>>password_admin;
		if(password_admin!="1111")
		{
			system("cls");
		 system("color 4");
		 cout<<"\n\n                                          sorry Invalid password : "<<endl;
		 cout<<"\n your account is "<<account_admin<<endl;
			cout<<"\n    your password is rong  try again :   ";
			goto y1;
			}
        else
		{
			 star:system("cls");//erase every thing in console
		 cout<<" your account is "<<account_admin<<endl;
 system("color 7");//make color white
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
	cout<<"9- add account "<<endl;
x:  
    enter_number=getch();//when you enter number it press Enter itself 
	switch(enter_number)
	{
		int z;
		case '1':
	  z= add_item();// z  store return value 
		if(z=='6')
		goto star;//if z=6 go to star
		//ext();
			     break;
		case '2': 
			delete_item();
			     break;
		case '3':
			z=edit_item();
			if(z==6)
			goto star; 
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
		case '9':
		account();
		break; 
		default:
			{
			system("color 4");
			cout<<"you entered invalid  number or charactors  : "<<endl;
		  enter_number=0;
			goto x;//go to x   for enter name again becuase user entered name valiad 
			}		 
	}
	cout<<"\n"<<endl;
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                  exit or get to back                        *"<<endl;
	cout<<"               **************************************************************"<<endl;
	char n;
	cout<<"\nnow:\n if you want to exit press 7:"<<setw(6)<<"   or  press 6 if you want to go to  Back to suprmarkets MENU: "<<endl;
 s: n=getch();//when you enter number it press Enter itself
	if(n=='6')
	 goto star;
	else if(n=='7')
	goto end;
	else
	 {
	  system("cls");
	 	system("color 4");
	  cout<<setw(8)<<"sorry! \n  you entered invalid number    enter 6 or 7 : "<<endl;
	  goto s;
	 }
end:  cout<<"***********************************************************\n"<<"see you later  : "<<endl; 
	}
		}    
		 
	  else if(choose=='2')
	  {
	  	int return1;char retur;
	  	system("color 7");
	  	retur=users();
	  	if(retur=='1')
	  	   return1=chose();	
	    else if(retur=='2')
	    goto ext;
	    else if(retur=='3') 
	    goto end;
  	if(return1==2)
	 casher();
	 else if(return1==3)
	 goto ext;
	 else
	 goto end;
	  }
	  
	  else if(choose=='3')
	  goto end;
      else
	  {
	  	system("cls");
	  	system("color 4");
	  	cout<<"You entered invalid number : "<<endl;
	   goto ext;
	  } 
	  	system("cls");
     system("color 2");
  cout<<"\n\n***********************\n"<<"see you later  : "<<endl; 
      cout<<"\n\n***********************";
	return 0; 
}


float add_item()
{    
    char x;
     system("cls");
     system("color c0");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                       add item                             *"<<endl;
	cout<<"               **************************************************************"<<endl;
  cin.ignore();
 again: cout<<"enter product name:\t "<<endl;
     getline(cin,product.name);//getline ignore space and get line from begaining to end line whan you enter any thing 
     cout<<"enter price : \t"<<endl;
	 constrain_price(product.price);
     cout<<"How many product "<<endl;
	 cin>>product.quantites;
	
//	 ofstream prod;//open file to write within
     ofstream outprod("text.txt",ios::app);//open file and name is text.txt  
	 outprod<<product.name<<setw(8);//write name in file not in console
 	 outprod<<product.price<<setw(8);//write in file price not in console
 	 outprod<<product.quantites<<setw(9)<<endl;//setw() get to space 
		outprod.close();//close the file you must close the file 
		cout<<"*****************************************"<<endl;
		cout<<"you entered item ";
		cout<<"successful: \n "<<"product's name  "<<product.name<<endl;
		cout<<"product's price   "<<product.price<<endl;
		cout<<"product's quantites   "<<product.quantites<<endl;
		cout<<"*******************************************"<<endl;
        cout<<"press 1 to add item again or nay key to exit: "<<endl;
        x=getch();
        cout<<endl;
        cin.ignore();//whan you use getline to enter string you must write it before getline
        if(x=='1')
        goto again;//go to again 
        return x;//return value to main to scan if user enter 6 go to beganing 
	//	ext();//to ext program or go to first program 		
}

void seartch_item()
{
	char scan='0';
	string name,price,quantite;//varibles to store name and price and quantite to display them in console and store them in file
	   system("cls");//erase every thing in console 
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                     search item                           *"<<endl;
	cout<<"               **************************************************************"<<endl;
	cout<<"enter the product name : "<<endl;
	cin.ignore();
	  getline(cin,product.name);//like cin>>prodrct.name;
	  
	  ifstream seartch_item("text.txt");//open file and read from within 
	  if(seartch_item.fail())//if file is not found send letter "error..." and exit
	  {
	  	system("color 4");//change color console to be red
	  	cout<<"error found in the file : "<<endl;
	  	exit(1);
	        }
	  string all_products[50];//array to store within every thing in file 
	  for(int i=0;i<50;i++)
	  {
	  	seartch_item>>all_products[i];//read from file to array 
   	  }
	  for(int i=0;i<50;i++)
	  {
	  	if(product.name==all_products[i])//compare if name that you enter = name in file 
	      {
	      	name=all_products[i];//if name that you enter = name int file store them to display
	      	price=all_products[i+1];//like name
	      	quantite=all_products[i+2];//like name
	      	scan='1';
		  }
	      
	     }
		  if(scan=='1')//if scan = 1 that mains product is found 
		  {	
		     system("cls");
		     system("color 1");
		     cout<<"\nfound it \n it is        "<<name<<"\n price is       " <<price<<"\n quantite is     "<<quantite<<endl;
				  }

		  else 
	  	{
		   system("cls");
		  system("color 4");
		  cout<<product.name<<" wasn't found in the database :  "<<endl;
		  }
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
	ifstream file("text.txt");//open file which name is text
	string deleted;//varible that you will enter
	string line;
	cout<<"enter the product name that you want to delete : "<<endl;
	cin>>deleted;
	cin.ignore();//use before cin.getline 
	system("color 1");
vector<string>s;//varbile name is s datatype is vector
	while(file>>line)//read every thing in file to store them in varible line
	{
		s.push_back(line);//read every thing in line to store them in s
	}
		file.close();//close the file
	 ofstream file1("text.txt");//open file1 to write within 
	  x=4;
	  int i=4;
	for(string item : s)//read product from s and store them in item without spacific size for
	{
		if(x!=1)
		{
	      if (item==deleted||x<=3)//scan if name in file will make scan =1 
	       {  
	           scan='1';
		       x--;
		      continue;
	        }
     	}
     file1<<item<<"    ";
   	 if(i%3==0)//to get new line 
     	file1<<"\n";
     i++;
	}
	if(scan=='1')//if scan =1 that main name in file 
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
int edit_item()
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
	system("cls");
	system("color 4");
	cout<<"Name that you entered is found in file \n"<<endl;
	cout<<"---  NOW  ---"<<endl;
	cout<<"enter name that you want to write it in the file : "<<endl;
	cin>>name_edit;
	cout<<"enter the price quntitie : "<<endl;
	string  price_edit,quntities;int price;
	 constrain_price (price);//cin>>price;
	cout<<"enter the quntities products : "<<endl;
	cin>>quntities;
	cin.ignore();
	ofstream ed("text.txt");
	system("cls");	
	system("color 1");
	int m=1,r=1;
	for(product1 line:edit1)
	{
	    if(m%3==0)
	    ed<<endl;
		if(name==line.name&&r==1)//r=1 to enter one to condition
		{
		 ed<<name_edit<<"     "<<price<<"     "<<quntities<<endl;
		  	name_edit=line.name;
			price=line.price;
			quntities=line.quantites; 
			continue;                                                           
		}
	   ed<<line.name<<"     "<<line.price<<"      "<<line.quantites<<endl;
	}
	cout<<name<<" is deleted "<<" and added "<<name_edit<<endl;
	ed.close();
}
  
void display_item()
{        system("cls");
        system("color 1");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                      display item                          *"<<endl;
	cout<<"               **************************************************************"<<endl;
	string line;
	ifstream display("text.txt");
	if(display.is_open())//if file is open display all names these in file in console 
	{
		while(getline(display,line))//read all line from file(sort) and store them in line 
		{
		cout<<line<<endl;//display all lines that in file to console
		}
		
	}
    display.close();
  //ext();//ext program or go to first program	
}
  void sort_item()
{        system("cls");
        system("color 1");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                      sort item                             *"<<endl;
	cout<<"               **************************************************************"<<endl;
	//vector<product1> line;
	vector<product1> v;
	ifstream sort1("text.txt");
	product1 item;
	string name[50];
	int x=1,m;
		while(sort1>>item.name)
		{
			
			sort1>>item.price;
			sort1>>item.quantites;
			v.push_back({item.name,item.price,item.quantites}); 
		}
		sort(v.begin(),v.end(),compare);
		for(const auto& a:v)
		{
			cout<<a.name<<"    "<<a.price<<"     "<<a.quantites<<endl;
		}
			
		
    sort1.close();
  //ext();//ext program or go to first program	
}
void account()
{
	string ccount_name,ccount_password; char c; int money;
	cout<<"enter your account to verify : "<<endl;
x2:		cin>>account_admin;
		if(account_admin=="hazem")
		cout<<" ";
		else
		{
			system("color 4");
			system("cls");
			cout<<"your account is Invalid  try again :"<<endl;
			goto x2;
		}
		system("cls");
		system("color 7");
		 cout<<" \n  your account is "<<account_admin<<endl;
		cout<<"\n\n               enter your password :     ";
y2:		cin>>password_admin;
		if(password_admin!="1111")
		{
			system("cls");
		 system("color 4");
		 cout<<" your account is "<<account_admin<<endl;
			cout<<"\n your password is rong  try again :"<<endl;
			goto y2;
			}
		else
		{
again:		system("color 7");
            cout<<"Enter account name that you want to add it : "<<endl;
			cin>>ccount_name;
			cout<<"Enter account password : "<<endl;
			cin>>ccount_password;
		    ofstream accoun("account.txt",ios::app);
		    accoun<<ccount_name<<"   ";
		    accoun<<ccount_password<<"   ";
		    cout<<"add money to "<<ccount_name<<endl;
			constrain_money(money);
		    accoun<<money<<endl;
		    accoun.close();
		    system("cls");
		    cout<<"you added account name is "<<ccount_name<<"   password is "<<ccount_password<<"      the money is "<<money<<endl;
		    cout<<"press 1 to add another   or any key to exit :  "<<endl;
		    c=getch();
		    if(c=='1')
		    goto again;
		}
	
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
//	ifstream sort("text.txt");
//	sort.read((char*)&arr,sizeof(int)*10);
//	for(int i=0;i<50;i++)
//	{
//		cout<<arr[i]<<"  "<<endl;
//	}
//	sort.close();
//	
//}
int users()
{
	string name, password,line;  char c;
	data_account All_data;
	int there=0;
again:	cout<<"\n \n\nplease  enter your account  :     ";
	cin>>account_user;
	cout<<"\n enter your password :    ";
	cin>>password;
    system("color 7");
    system("cls");
	 ifstream account1("account.txt");
	 vector<data_account> v1;
	 while(account1>>All_data.account_name)
	 {
	 	account1>>All_data.account_password;
	 	account1>>All_data.account_money;
	 	
	 	v1.push_back({All_data.account_name,All_data.account_password,All_data.account_money});
	 }
	 
	 for(data_account data:v1)
	 {
	 	if(account_user==data.account_name&&password==data.account_password)
	 	{
	 		there=1;
	 		break;
		 }
	 }
	 account1.close();
	if(there==0)
	{
		system("cls");
		system("color 4");
		cout<<"password or account is Invalid : "<<endl;
		goto again;
	}
	
	 
	cout<<"  Hello   "<<account_user<<"\n"<<endl;
	 cout<<"\n\n  1-buy     2-go to back     3-exit     : "<<endl;
	 c=getch();
	 return c;
}

int chose()
{
	char x,cho;
star:
    string chose_name,total,line_display;int here=0;
    product1 line;
    vector<product1> chose_vector;
    ifstream dsplay("text.txt");
    while(getline(dsplay,line_display))
    {
    	cout<<line_display<<endl;
	}
	    cout<<"**********************************"<<endl;

	ifstream ch("text.txt");
    while(ch>>line.name)
    {
    	ch>>line.price;
    	ch>>line.quantites;
    	chose_vector.push_back(line);
    	
	}
	ch.close();
	ofstream store("file.txt",ios::app);
	cout<<"chose products : \n"<<endl;
     store<<account_user<<endl;
     
ag:
n:  cin>>chose_name;	 
	for(product1 sell:chose_vector)
	{
		if(chose_name==sell.name)
         {
	      store<<sell.name<<"      ";
	      store<<sell.price<<endl;
	      here=1;
		 break;
		 }
	}
	if(here==0)
	{
		system("cls");
		system("color 4");
		cout<<"sorry to entered number Invalid : "<<endl;
		goto star;
	}
	
  cout<<" 1-another products    2-get them      3-goto to star   4-exit   : "<<endl;
r:    cho=getch();
	switch(cho)
	{
	 case '1':
	 	goto ag;
	 	break;
	case '2':
	    store<<"1"<<endl;
		store.close();
		return 2;
		break;
	case '3':
	    return 3; 
	    break;
	case '4':
		return 4;
	default :
	cout<<"you entered number Invalid : "<<endl;
	goto r;
		break;
	}
} 

void casher()
{
	int money1;
	system("cls");
	system("color 3");
	ifstream money("account.txt");
	data_account m;
	vector<data_account> v;
	while(money>>m.account_name)
	{
		money>>m.account_password;
		money>>m.account_money;
		v.push_back(m);
	}
	for(data_account c:v)
	{
		if(account_user==c.account_name)
		{
			money1=c.account_money;
			
		}
	}

 cout<<"\n\n                 Hello          "<<account_user<<"      your money is  "<<money1<<endl;	
 cout<<"\n products are : "<<endl;
 cout<<"name           price  "<<endl;
  ifstream f("file.txt");
  string line;
   int n=0;
  vector <string> vector_line;
  while(getline(f,line))
  {
  	vector_line.push_back(line);
  }
  for(string l:vector_line)
  {
  	 if(l==account_user)
  {
  	n=1;
  	continue;
  }
    
  	if(n==1)
  	{
  	
		  if(l=="1")
  		break;
		  cout<<l<<endl;
		  continue;	
	  }
  }
	int x;
	cin>>x;
	
}

bool constrain_money(int&money)
{
	again_money:
	cin>>money;
	if(cin.fail())
	{
		cout<<"sorry you entered Invalid charctars : "<<endl;
		cin.clear();
		cin.ignore(2500,'\n');
		goto again_money;
	}
}

bool constrain_price(int&price)
{
	again_price:
	cin>>price;
	if(cin.fail())
	{
		cout<<"sorry you entered charctars : "<<endl;
		cin.clear();
		cin.ignore(2500,'\n');
		goto again_price;
	}
}














