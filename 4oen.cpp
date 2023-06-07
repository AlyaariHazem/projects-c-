#include <iostream>
using namespace std;
class School{
	public :
		string name;
		int age;
		void fan()
		{
			this->age=this->age+1;
			cout<<this->age<<endl;
		}
		
	private:
};
main()
{

	School h1;
     cin>>h1.age;
     h1.name="Hazem AL-yaari ";
     h1.fan();
	cout<<h1.age<<endl;
	cout<<h1.name<<endl;
	
	
	
	
	
	
	
}