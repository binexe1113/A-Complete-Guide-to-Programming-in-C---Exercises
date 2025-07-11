/*The int variable x contains the number 7. Calculate the value of the following
logical expressions:
a. x < 10 && x >= –1
b. !x && x >= 3
c. x++ == 8 || x == 7*/
#include <iostream>
using namespace std;

int main(){
    int x = 7;
    //a)
    bool boola(x<10&&x>=1);
    bool boolb(!x && x>=3);
    bool boolc(x++ ==8 || x==7);
    cout<<boola<<endl;
    cout<<boolb<<endl;
    cout<<boolc<<endl;

}