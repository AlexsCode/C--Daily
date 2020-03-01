//written by Alex Tuddenham

//set Libaries used
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>

using namespace std;


//start of main thread
int main() {
  int diefacenumber=(rand()%100+1); // sets the number of faces randomly, always non-zero
  int numberofrolls=(rand()%10+1); //sets possible number of rolls randomly, always non-zero
  int diceroll[numberofrolls]; //sets the number of rolls which is being used in this iteration of the code.
  int score[numberofrolls]; //sets the score counter which is being used in this iteration of the code.
  int highscore=0; //defines current highscore as 0.

  srand(time(0)); //clock to start from - used in random generator
  
  //loop for ever dice roll.
  for (int i=0;i<numberofrolls;i++) 
      { diceroll[i]=(rand()%diefacenumber+1); // assigns a random digit to array between 1 and final face
        score[i] = diceroll[i] * i; // multiplies by yahtzee scoring
        if (score[i]>highscore) // loop to find the best score
          {highscore=score[i];}}
          cout<<highscore<<endl; } //prints the highest score possible, end of loop and code.

