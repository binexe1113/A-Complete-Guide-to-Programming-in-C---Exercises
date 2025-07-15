/*Write a C++ program that reads a word from the keyboard, stores it in a string,
and checks whether the word is a palindrome.A palindrome reads the same
from left to right as from right to left.The following are examples of
palindromes:“OTTO, ” “deed, ” and “level.”
Use the subscript operator []. Modify the program to continually read and
check words.*/
#include<iostream>
#include<string.h>
using namespace std;

bool PalindromeChecker(string s);

int main(){
    string input;
    do{
    cout<<"Enter a string"<<endl;
    cin>>input;
    cout<<"\nChecking if it a palindrome..."<<endl;

    if(PalindromeChecker(input) == true){
        cout<<"It is a Palindrome\n";
    }else{
        cout<<"It is not a Palindrome\n";
    }  
}
    while(true);
}

bool PalindromeChecker(string s){
    string check;
    for (int i = s.size()-1;i>=0;i--){
        check +=s[i];
    }
    cout<<check<<endl;
    return (s==check);
}
