/*Create a C++ program that defines a string containing the following character
sequence:
I have learned something new again!
and displays the length of the string on screen.
Read two lines of text from the keyboard. Concatenate the strings using " * "
to separate the two parts of the string. Output the new string on screen.*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string prompt = "I have learned something new again!";
    string userInput1,userInput2,sum;
    cout<<prompt<<endl;
    cout<<"The lenght of that string is: "<<prompt.length()<<endl;
    cout<<"Enter a string: ";
    getline(cin,userInput1);
    cout<<"Enter another string: ";
    getline(cin,userInput2);
    sum = userInput1 + "*" + userInput2;
    cout<<sum<<endl;

    return 0;

}