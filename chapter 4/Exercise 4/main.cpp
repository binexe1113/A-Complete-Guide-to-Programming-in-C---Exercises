/*Write a C++ program that reads any given character code (a positive integer)
from the keyboard and displays the corresponding character and the character
code as a decimal, an octal, and a hexadecimal on screen.
*/
#include<iostream>
using namespace std;

int main(){
char userChar;
int userInt;

cout<< "Enter a char: ";
cin >> userChar;
userInt=userChar;
cout <<"As hexadecimal: "<< hex <<userInt<<endl;
cout<<"As octal: "<< oct<<userInt<<endl;
cout<<"As decimal: "<< dec<<userInt;
}