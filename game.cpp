#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum Game {
  ROCK, PAPER, SCISSORS
};

int main() {

  int player1;
  int player2;
 m:
  cout << "Player 1: Rock (0), Paper (1), or Scissors (2)? ";
 cin >> player1;
 srand(time(0));
  cout << "Player 2: Rock (0), Paper (1), or Scissors (2)? ";
  cout<<rand()%2<<endl;
player2=rand()%2; 
  if (player1 == ROCK && player2 == PAPER) 
   {
    cout << "Player 2 wins!" << endl;
   }
   else if(player1 == ROCK && player2 == SCISSORS)
    {
    cout << "Player 1 wins!" << endl;
    }
  else if (player1 == PAPER && player2 == ROCK)
     {
    cout << "Player 1 wins!" << endl;
     }
  else if (player1 == PAPER && player2 == SCISSORS)
   {
    cout << "Player 2 wins!" << endl;
  
   }
   else if (player1 == SCISSORS && player2 == PAPER)
	 {
    cout << "Player 1 wins!" <<endl;
     }
  else if (player1 == SCISSORS && player2 == ROCK) 
  {
    cout << "Player 2 wins!" <<endl;
  } 
  else if (player1 == PAPER && player2 == ROCK) 
  {
    cout << "Player 1 wins!" <<endl;
  } 
  else if (player2 ==PAPER && player1 == SCISSORS) 
  {
    cout << "Player 1 wins!" <<endl;
  } 
  else if(player1 == ROCK && player2 == ROCK||player1 == PAPER && player2 == PAPER||player1 == SCISSORS && player2 == SCISSORS)
	 {   cout << "It's a tie!" <<endl;   }
	 else
    cout<<"                                      sorry enter number of 0 or 1 or 2 : "<<endl;goto m;

  return 0;  }

