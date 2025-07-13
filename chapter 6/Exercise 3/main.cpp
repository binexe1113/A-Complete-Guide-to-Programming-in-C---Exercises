/*Write a C++ program that reads an integer between 0 and 65535 from the
keyboard and uses it to seed a random number generator.Then output 20
random numbers between 1 and 100 on screen.*/
#include <iostream>
using namespace std;

int main(){
    long int userInput;
    cout<<"Enter a integer between 0 and 65535 ";
    cin >>userInput;
    srand(userInput);
    for(int i=0;i<20;i++){
            cout<<"Random Number "<<i+1<<": "<<rand()<<endl;

    }

}