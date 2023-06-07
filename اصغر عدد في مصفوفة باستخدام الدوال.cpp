#include <iostream>\\hazem AL-yaari
using namespace std;
void small_number();
 int main()
 { 
 cout<<"
  some of numbers and enter charcter to exit : "<<endl;
 small_number();
// cout<<small<<endl;
 return 0;		
}
void small_number()
{
	cout<<"enter some of numbers and enter charcter to exit : "<<endl;
	double small,x[20],m;
   for(int i=0;i<20;i++)
  {
  	cin>>x[i];
  	if(x[i]<0)
  	{
  	cout<<"sorry you entered negative number ! "<<endl;
  		m=i-1;
	  break;
	  }
	  else if(x[i]>0)
	  continue;
	  else
	  {
	  	  	cout<<"whan you entered charcters , program is ended ! "<<endl;
  		m=i-1;
	  break;
	  }
  }
  small=x[0];
  for(int i=0;i<m;i++)
   {
   	 if(small>x[i+1])
   	 small=x[i+1];
	}
	cout<<"the small number that you entered is "<<small<<endl;
}
