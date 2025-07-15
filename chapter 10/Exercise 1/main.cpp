#include <iostream>
#include <ctime>
#include "sum_t.h"

using namespace std;


int main(){
    time_t sec;
    time(&sec); 
    srand(sec); 

    long a = rand();
    long b = rand();
    long c = rand();
    long d = rand();

    cout << sum(a, b, c, d) << endl;
    cout << sum(a, b, c) << endl;
    cout << sum(a, b) << endl;

    return 0;
}

