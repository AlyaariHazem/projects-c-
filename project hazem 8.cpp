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
void delete_item();//fanction to delete item
float add_item();//fanction to add item
void seartch_item();
void edit_item();
//void back_to_suprmarket();
void display_item();
void sort_item();
void buy_item();
void users();
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
        cout<<"  Hello \n please enter your account or  name : "<<endl;
x1:		cin>>account_admin;
		if(account_admin=="hazem")
		cout<<"  ";
		else
		{
			system("color 4");
			system("cls");
			cout<<"your account or name is Invalid  try again :"<<endl;
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
		 cout<<"\n your account is "<<account_admin<<endl;
			cout<<"\n your password is rong  try again :   ";
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
	  	int return1;
	  	system("color 7");
	  	users();
	  	cout<<"choose any products you want : "<<endl;
	  	return1=chose();
  	if(return1=2)
	 casher();
	else
	 cout<<" ";
	  }
	  else if(choose=='3')
	  x='\b';
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
 
 again: cout<<"enter product name:\t "<<endl;
     getline(cin,product.name);//getline ignore space and get line from begaining to end line whan you enter any thing 
     cout<<"enter price : \t"<<endl;
     cin>>product.price;
	 
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
void edit_item()
{
	system("cls");
	system("color 6");
	cout<<"               **************************************************************"<<endl;
	cout<<"               *                       edit item                            *"<<endl;
	cout<<"               **************************************************************"<<endl;
  
	string name_edit,name,edi[50];
    bool ch=false;
    cout<<"enter name that you want to edit it : "<<endl;
not_found: cin>>name;
	ifstream edit("text.txt");
	for(int i=0;i<50;i++)
	{
		edit>>edi[i];
		
		if(name==edi[i])
		  ch=true;
		  
	}
	
	if(ch==false)
	{
		system("color c");
		system("cls");
		cout<<"sorry ! "<<endl;
	cout<<name<<" is not in file enter  name agian :a  ";
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
	string  price_edit,quntities;
	cin>>price_edit;
	cout<<"enter the quntities products : "<<endl;
	cin>>quntities;
	cin.ignore();
	ofstream ed("text.txt");
	system("cls");	
	system("color 1");
	int m=1,r=2;
	for(int i=0;i<50;i++ && m++)
	{
	    if(m%3==0)
	    ed<<endl;
		if(name==edi[i]&&r==2)//r=2 to edit one    not edit all
		{
		 ed<<name_edit<<"     "<<price_edit<<"     "<<quntities<<endl;
		 i+=3; m+=3;r--;		
		}
	   ed<<edi[i]<<"     ";
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
	int x=1,price1[50],quntitie[50],m;
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
void users()
{
	string name;int password;
	cout<<"\n Hello \n\nplease  enter your account_user :     ";
y:	cin>>account_user;
    system("color 7");
    system("cls");
	if(account_user=="hazem"||account_user=="user")
	goto x;
	else
	{
		system("cls");
		system("color 4");
		cout<<"sorry you entered account Invalid try again : "<<endl;
		goto y;
	}
x:	cout<<"\n enter your password :    ";
m:	cin>>password;
	if(password==111||password==123)
	goto r;
	else
	{
		system("cls");
		system("color 4");
		cout<<"sorry : your password is rong try again : "<<endl;
		goto m;
	}
r:	 
	cout<<"  Hello   "<<account_user<<"\n"<<endl;
	ifstream buy("text.txt");
	while(getline(buy,name))
	 {
	 	cout<<name<<endl;
	 }
}

int chose()
{
	char x;
star:
    string chose_name,total;
    product1 line;
    cout<<"**********************************"<<endl;
ag:	cout<<"enter product name"<<endl;
    cin>>chose_name;
    vector<product1> chose_vector;
	ifstream ch("text.txt");
    while(ch>>line.name)
    {
    	ch>>line.price;
    	ch>>line.quantites;
    	chose_vector.push_back(line);
    	
	}
	ch.close();
	ofstream store("file.txt",ios::app);	 
	for(product1 sell:chose_vector)
	{
		if(chose_name==sell.name)
         {
	      store<<sell.name<<"      ";
	      store<<sell.price<<endl ;
		 continue;
		 }
	}
	store.close();
n:  cout<<" 1-add another product    2-returning        3-exit  "<<endl;
   x=getch();
   if(x=='1')
   goto star;
   else if(x=='2')
   return 1;
   else if(x=='3')
    return 0;
    se:
   {
   	chose_name="0";
   cout<<"you enter number invilid : "<<endl;
   goto n;
   }
}

void casher()
{
 cout<<"                 Hello          "<<account_user<<"      your money is  "<<endl;	
	
	
	
	
	
}

bool constrain_money(int&money)
{
	again_money:
	cin>>money;
	if(cin.fail())
	{
		cout<<"sorry you entered number Invalid : "<<endl;
		cin.clear();
		cin.ignore(2500,'\n');
		goto again_money;
	}
}
















