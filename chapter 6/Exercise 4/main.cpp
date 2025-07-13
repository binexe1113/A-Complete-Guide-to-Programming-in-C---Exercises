/*Write a program for the following numerical game:
The computer stores a random number between 1 and 15 and the player
(user) attempts to guess it.The player has a total of three attempts.After each
wrong guess, the computer tells the user if the number was too high or too low.
If the third attempt is also wrong, the number is output on screen.
The player wins if he or she can guess the number within three attempts.
The player is allowed to repeat the game as often as he or she wants.*/
#include<iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;



int main(){
    long long sec;
    time( &sec ); // Take the number of seconds and
    srand( (unsigned)sec ); // use it to initialize.     int guess;
    int guess=0,numberGoal;
    int userGuess;

    numberGoal = 1 + rand() % (15);

    cout<<"Let's play a GAME!\nGuess correctly a number beteween 1 and 15\nYou have three guesses.\n";

    do{
        cin>>userGuess;
        if (userGuess==numberGoal){
            cout<<"YOU WIN";
            return 0;
        }else{
            cout<<"Wrong number, try again\n";
            guess++;
        }

    }while(guess<3);
    cout<<"YOU LOST"<<endl;
    cout<<"THE NUMBER WAS: "<<numberGoal<<endl;
    return 0;
}