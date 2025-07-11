/*Write a C++ program that two defines variables for floating-point numbers and
initializes them with the values
123.456 and 76.543
Then display the sum and the difference of these two numbers on screen.*/
#include <iostream>
using namespace std;

int main(){
    float x = 123.456;
    float y = 76.453;
    float sum = x+y;
    float dif = x-y;
    cout <<x<<" + "<<y<<" = "<<sum<< endl;
    cout <<x<<" - "<<y<<" = "<<dif<< endl;

    return 0;
}