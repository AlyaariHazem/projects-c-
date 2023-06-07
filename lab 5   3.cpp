#include <iostream>
using namespace std;
main()
  {
  	int y,a;
 	
  	char cha;
  	
  	cout<<"enter the any thing "<<endl;
    cin>>cha;
    y=cha;
    
  	
  
  		if(y>=48&&y<=57)
  	cout<<"this is number "<<endl;
  	else if(y<=122&&y>=65)
  	cout<<"this is character "<<endl;
  	else 
  	cout<<"this is sign "<<endl;
  }