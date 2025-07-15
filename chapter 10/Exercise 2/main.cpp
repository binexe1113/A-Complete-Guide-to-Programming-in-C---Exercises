#include <iostream>
using namespace std;

inline double Max(double x,double y);

int main(){
    char a,b;
    double x,y;
    cin>>a;
    cin>>b;
    cin>>x;
    cin>>y;
    cout<<Max(a,b);
    cout<<Max(x,y);
}

inline double Max(double x,double y){
    if(x>=y){
        return x;
    }else{
        return y;
    }
}

inline char Max(char x,char y){
        if(x>=y){
        return x;
    }else{
        return y;
    }

}