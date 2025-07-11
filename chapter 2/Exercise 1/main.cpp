/*The sizeof operator can be used to determine the number of bytes occupied
in memory by a variable of a certain type. For example, sizeof(short) is
equivalent to 2.
Write a C++ program that displays the memory space required by each
fundamental type on screen*/

#include <iostream>
using namespace std;

int main(){
    cout << sizeof(bool)<< endl;
    cout << sizeof(char)<< endl;
    cout << sizeof(wchar_t)<< endl;
    cout << sizeof(short)<< endl;
    cout << sizeof(int)<< endl;
    cout << sizeof(long)<< endl;
    cout << sizeof(float)<< endl;
    cout << sizeof(double)<< endl;
    cout << sizeof(long double)<< endl;
}