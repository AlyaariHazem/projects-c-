#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("color f0");
    int x;
    cout<<"Enter the Age:\n";
    cin>>x;
    if(x>=1&&x<=15)
        cout<<"Child :";
    else if(x>16&&x<=30)
        cout<<"Young";
    else
        cout<<"Old";
return 0;
}
