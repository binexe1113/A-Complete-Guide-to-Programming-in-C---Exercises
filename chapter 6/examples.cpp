// // average.cpp
// // Computing the average of numbers
// #include <iostream>
// using namespace std;
// int main()
// {
// int x, count = 0;
// float sum = 0.0;
// cout << "Please enter some integers:\n"
// "(Break with any letter)"
// << endl;
// while( cin >> x )
// {
// sum += x;
// ++count;
// }
// cout << "The average of the numbers: "
// << sum / count << endl;
// return 0;
// }

// // Euro1.cpp
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
// double rate = 1.15; // Exchange rate:
// // one Euro to one Dollar
// cout << fixed << setprecision(2);
// cout << "\tEuro \tDollar\n";
// for( int euro = 1; euro <= 5; euro++)
// cout << "\t " << euro
// << "\t " << euro*rate << endl;
// return 0;
// }

// ascii.cpp : To output an ASCII Code Table
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int ac = 32; // To begin with ASCII Code 32
// without control characters.
while(true)
{ cout << "\nCharacter Decimal Hexadecimal\n\n";
int upper;
for( upper =ac + 20; ac < upper && ac < 256; ++ac)
cout << " " << (char)ac // as character
<< setw(10) << dec << ac
<< setw(10) << hex << ac << endl;
if( upper >= 256) break;
cout <<"\nGo on -> <return>,Stop -> <q>+<return>";
char answer;
cin.get(answer);
if( answer == 'q' || answer == 'Q' )
break;
cin.sync(); // Clear input buffer
}
return 0;
}