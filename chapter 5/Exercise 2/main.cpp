/*a. How are operands and operators in the following expression associated?
x = –4 * i++ – 6 % 4;
Insert parentheses to form equivalent expressions.
b. What value will be assigned in part a to the variable x if the variable i has a
value of –2?
*/
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int x = (-4) * (i++) - (6%4);
    cout << x<<endl;

     i =-2;
     x = (-4) * (i++) - (6%4);
    cout << x<<endl;


}