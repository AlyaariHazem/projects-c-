#include <iostream>//ÍÇÒã ÚÈÏÇááå  ÇáíÚÑí 
using namespace std;
main()
  {
 	int x,y,s;
 	cout<<"enter your grades  "<<endl;
 		double a,sum;
 	for(x=1;x<=5;x++)
 	 {
 	 	cin>>y;
 	 	a+=y;
 	 }
 	sum=a/5;
   cout<<sum<<endl;
   s=sum;
   switch(s/10)
  {
  	 case 10:cout<<"your range is "<<s<<" exllant "<<endl;
  	 break;
     case 9:cout<<"your range is "<<s<<" exllant "<<endl;
     break;
     case 8:cout<<"your range is "<<s<<" very good"<<endl;
     break;
      case 7:cout<<"your range is "<<s<<" good  "<<endl;
      break;
      default:
       cout<<"your range is "<<sum<<" accept "<<endl;
       break;
       
  }
    }