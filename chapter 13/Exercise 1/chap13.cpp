#include <iostream>
#include<ctime>
#include "chap13.h"
using namespace std;

void Date::init(int m,int d,int y){
        month = m;
        day = d;
        year = y;
    }
    
void Date::init() {
        time_t now = time(0);
        tm *localTime = localtime(&now);
    
        year = localTime->tm_year + 1900;
        month = localTime->tm_mon + 1;
        day = localTime->tm_mday;
    }
    


void Date::print() {
    cout << month << "-" << day << "-" << year << endl;
}
