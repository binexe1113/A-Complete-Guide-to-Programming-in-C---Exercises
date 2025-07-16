#include <iostream>
#include <ctime>
#include "chap13.h"
using namespace std;


int main() {
    // Get current time as time_t
    time_t now = time(0);

    // Convert to tm struct
    tm *localTime = localtime(&now);

    int year = localTime->tm_year + 1900;
    int month = localTime->tm_mon + 1;
    int day = localTime->tm_mday;

    // Create Date object
    Date today;
    Date whatever;
    today.init();
    whatever.init(12,25,2024);

    cout << "Today's date: ";
    today.print();
    whatever.print();

    return 0;
}
