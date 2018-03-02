#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
int times;
int wins=0;
int i;
SecretDoor Game;

cout<<"How many times would you like to play the secret door game?"<<endl;
cin>>times;

while(i<times)
    {

   Game.newGame();
   Game.guessDoorC();
   Game.guessDoorC();
   if(Game.isWinner()==true)
        {
            wins=wins+1;
        }
   times=times+1;


    }

cout<<"You have won a total of "<<wins<<" games out of "<<times<<endl;

  return 0;
}
