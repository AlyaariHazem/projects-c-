#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;
main()
{
	int n;//calculates the average number of attemples 
	float average,play=0,count=0;
	cout<<"Hello \n I will choose number and you will guess what I chose : "<<endl;
	srand(time(NULL));
again:	
      play++;
      count=0;
     char x;int guess,number_choose,num=1,z;
	int far=0,close=0;
      
	 cout<<"\n 1-Guess big numbers from 80 to 100 \n 2-Guess small numbers from 1 to 20"<<endl;
	    x=getch();//allow to use to enter one number or charactor
		 
        if(x=='1')
        {
        	system("cls");   	
	   	 number_choose=rand()%(100-80)+80;
        cout<<"Now I chose number you will guess what I chose : "<<endl;
aga:   close=0; 	
cin>>guess;
      for(int x=1;x<=3;x++)
         {
         	if(guess+x==number_choose||guess-x==number_choose)
         	close=1;
		 }
		 
        	 if(num<10)//condition to allows the user to enter 10 digits 
	   {
	    if(number_choose==guess)//condition to compare
	     { 
	     cout<<"*******************************************************"<<endl;
	        count++;//How many guess that you entered 
	    	cout<<"Yes you guess number valid : "<<endl;
	    	cout<<"I chose "<<number_choose<<endl;
	    	cout<<"you guess "<<guess<<endl;
	    	cout<<"you tried "<<count<<" times to make your guess correct "<<endl;
		    cout<<"press 1 to play again  or any key to exit: "<<endl;
		 cout<<"*******************************************************"<<endl;
		    cin>>z;
		    if(z==1)
		    goto again;
		 }  
		else
		 {
			cout<<"sorry rong guess : "<<endl;
			
			if(close==1)
		 		cout<<"your guess is close : "<<endl;
		  else
		  cout<<"your guess is far away : "<<endl;
			num++;//increase to be 10 and finsh 
			count++;//How many guess that you entered
		    n++;//calculates the average number of attemples 
			goto aga;
			
	     }  
	}
		}
	
	else if(x=='2')
	 {
		number_choose=rand()%20;
		close=0;
		system("cls");
		cout<<"Now I chose number guess what I chose : "<<endl;
ag:	
	cin>>guess;
		for(int r=1;r<=3;r++)
         {
         	if(guess+r==number_choose||guess-r==number_choose)
         	close=1;
		 }
		 
		if(num<10)
	   {
		if(number_choose==guess)
	    {
	    	cout<<"*******************************************************"<<endl;
	    	count++;//How many guess that you entered
	    	cout<<"Yes you guess number valid : "<<endl;
	    	cout<<"I chose "<<number_choose<<endl;
	    	cout<<"you guess "<<guess<<endl;
	    	cout<<"you try "<<count<<" times to make your guess correct "<<endl;
		    cout<<"press 1 to play again  or any key to exit: "<<endl;
		    cout<<"*******************************************************"<<endl;
		    cin>>z;
		    if(z==1)
		    goto again;
		}
		else
		{
			cout<<"sorry rong guess : "<<endl;
			if(close==1)
		 		cout<<"your guess is close : "<<endl;
		  else
		  cout<<"your guess is far away : "<<endl;
			num++;//increase to be 10 and finsh 
			count++;//How many guess that you entered
		    n++;//calculates the average number of attemples 
			goto ag;
			
		}
	}
    }
	else
    {
    	system("cls");
    	cout<<"you enter Invalid numbers "<<endl;
    	goto again;
	}
	   
	   
     cout<<"number of games are "<<play<<endl;
     average=(play+count)/2;
     cout<<"average number of attempts is "<<average<<endl;
     cout<<"count is "<<count<<endl;

cout<<"the number I chose is  "<<number_choose<<endl;
}
	

