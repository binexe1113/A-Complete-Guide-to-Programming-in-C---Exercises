// // Inputs an article label and a price
// #include <iostream> // Declarations of cin, cout,...
// #include <iomanip> // Manipulator setw()
// #include <string>
// using namespace std;
// int main()
// {
// string label;
// double price;
// cout << "\nPlease enter an article label: ";
// // Input the label (15 characters maximum):
// cin >> setw(16); // or: cin.width(16);
// cin >> label;
// cin.sync(); // Clears the buffer and resets
// cin.clear(); // any error flags that may be set
// cout << "\nEnter the price of the article: ";
// cin >> price; // Input the price
// // Controlling output:
// cout << fixed << setprecision(2)
// << "\nArticle:"
// << "\n Label: " << label
// << "\n Price: " << price << endl;
// // ... The program to be continued

// return 0;
// }

// Enter hexadecimal digits and a floating-point number
//
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
// int number = 0;
// cout << "\nEnter a hexadecimal number: "
// << endl;
// cin >> hex >> number; // Input hex-number
// cout << "Your decimal input: " << number << endl;
// // If an invalid input occurred:
// cin.sync(); // Clears the buffer
// cin.clear(); // Reset error flags
// double x1 = 0.0, x2 = 0.0;
// cout << "\nNow enter two floating-point values: "
// << endl;
// cout << "1. number: ";
// cin >> x1; // Read first number
// cout << "2. number: ";
// cin >> x2; // Read second number
// cout << fixed << setprecision(2)
// << "\nThe sum of both numbers: "
// << setw(10) << x1 + x2 << endl;
// cout << "\nThe product of both numbers: "
// << setw(10) << x1 * x2 << endl;
// return 0;
// }

// Reads a text with the operator >>
// and the function getline().
#include <iostream>
#include <string>
using namespace std;
string header =
" --- Demonstrates Unformatted Input ---";
int main()
{
string word, rest;
cout << header
<< "\n\nPress <return> to go on" << endl;
cin.get(); // Read the new line
// without saving.
cout << "\nPlease enter a sentence with several words!"
<< "\nEnd with <!> and <return>."
<< endl;
cin >> word; // Read the first word
getline( cin, rest, '!'); // and the remaining text
// up to the character !
cout << "\nThe first word: " << word
<< "\nRemaining text: " << rest << endl;
return 0;
}