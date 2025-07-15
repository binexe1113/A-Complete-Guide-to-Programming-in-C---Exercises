#include <iostream>
using namespace std;

double pow(double base, int exp);

int main(){
    double base,dob;
    int exp; 
    cout<< "Enter base\n";
    cin>>base;
    cout<<"\nEnter exponent";
    cin>>exp;
    cout<<"Personalized function: ";
    cout<<pow(base,exp);
    cout<<"\nTraditional function\n Enter value for ohter double: ";
    cin>>dob;
    cout<<pow(base,dob);

}
double pow(double base, int exp){
    double res=1;
    for (int i =0;i<exp;i++){
        res = base*res;
    }
    return res;
}