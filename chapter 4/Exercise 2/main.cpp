/*Formulate statements to perform the following:
a. Left-justify the number 0.123456 in an output field with a width of 15.
b. Output the number 23.987 as a fixed point number rounded to two decimal places, right-justifying the output in a field with a width of 12.
c. Output the number –123.456 as an exponential and with four decimal
spaces. How useful is a field width of 10?*/

#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    double x1 = 0.123456;
    double x2 = 23.987;
    double x3 = -123.456;

    //a)
    cout << left << setw(15)<< x1 << endl;

    //b)
    cout << fixed << setprecision(2)<<setw(12)<<x2 << endl;

    //c)
    cout << scientific<<setw(15)<<setprecision(4)<<x3<<endl; 
}