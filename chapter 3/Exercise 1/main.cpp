/*Create a program to calculate the square roots of the numbers
4 12.25 0.0121
and output them as shown opposite.Then read a number from the keyboard and
output the square root of this number.
To calculate the square root, use the function sqrt(), which is defined by the
following prototype in the math.h (or cmath ) header file:
double sqrt( double x);
The return value of the sqrt() function is the square root of x.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double userInput;
    cout << "Number\tSquare Root" << endl;
    cout << "4" <<"\t"<<sqrt(4)<<endl;
    cout <<"12.25\t"<<sqrt(12.25)<<endl;
    cout <<"0.0121\t"<<sqrt(0.0121)<<endl;
    cout <<"Input an number ";
    cin >> userInput;
    cout<<userInput<<"\t"<<sqrt(userInput);

    return 0;
}