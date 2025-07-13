/*Exercise 2
Write a C++ program that outputs a complete multiplication table (as shown
opposite) on screen*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i, j;

    //print header row
    cout  << " ";
    for (j = 1; j <= 10; j++) {
        cout  << j;
    }
    cout << endl;

    //Actual multiplication table
    for (i = 1; i <= 10; i++) {
        cout << setw(4) << i;
        for (j = 1; j <= 10; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}
