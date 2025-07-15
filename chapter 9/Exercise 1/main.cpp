/*Write a C++ program to
■ initialize a string s1 with the string "As time by ..." and a second
string s2 with the string "goes",
■ insert string s2 in front of "by" in string s1,
■ erase the remainder of string s1 after the substring "by",
■ replace the substring "time" in s1 with "Bill".*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    //initialized
    string s1 = "As time by ...";
    string s2 = "goes ";
    string s3;
    int pos;
    
    //
    cout<<s1<<"\n";
    //Inserted
    pos = s1.find("by");
    s1 = s1.insert(pos,s2);
    cout<<s1;

    //erased
    pos = s1.find("by");
    s1 = s1.erase(pos+2);
    cout<<"\n"<<s1<<"\n";

    //Replaced
    pos = s1.find("time");
    s1 = s1.replace(pos,4,"Bill");
    cout<<s1;
}