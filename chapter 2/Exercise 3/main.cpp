/*Which of the variable definitions shown on the opposite page is invalid or does
not make sense?*/
/*int a(2.5); const long large;
int b = '?'; char c('\'');
char z(500); unsigned char ch = '\201';
int big = 40000; unsigned size(40000);
double he's(1.2E+5); float val = 12345.12345;*/

#include <iostream>
using namespace std;
int a(2.5); //INCORRECT NOT INT
const long large;//Unitialized
int b = '?'; 
char c('\'');
char z(500);//VALUE TOO LARGE, NOT A CHAR
unsigned char ch = '\201';
int big = 40000; 
unsigned size(40000); //AUTOMATICALY INITIALIZED AS INT
double he's(1.2E+5); //ERROR INVALID DECLARATION HERE ' NOT ALLOWED
float val = 12345.12345; //OVER 6 DIGITS SHOULD'VE USED A LONG 