// // Definition and use of variables
// #include <iostream>
// using namespace std;

// int gVar1; // Global variables,
// int gVar2 = 2; // explicit initialization
// int gVar3(5);
// int main()
// {
// char ch('A'); // Local variable being initialized
// // or: char ch = 'A';
// cout << "Value of gVar1: " << gVar1 << endl;
// cout << "Value of gVar2: " << gVar2 << endl;
// cout << "Character in ch: " << ch << endl;
// int sum, number = 3; // Local variables with
// // and without initialization
// sum = number + 5;
// cout << "Value of sum: " << sum << endl;
// return 0;
// }

// Circumference and area of a circle with radius 2.5
#include <iostream>
using namespace std;
const double pi = 3.141593;
int main()
{
double area, circuit, radius = 1.5;
area = pi * radius * radius;
circuit = 2 * pi * radius;
cout << "\nTo Evaluate a Circle\n" << endl;
cout << "Radius: " << radius << endl
<< "Circumference: " << circuit << endl
<< "Area: " << area << endl;
return 0;
}