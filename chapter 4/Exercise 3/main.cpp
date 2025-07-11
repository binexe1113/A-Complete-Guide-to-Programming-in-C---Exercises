/*Write a C++ program that reads an article number, a quantity, and a unit price
from the keyboard and outputs the data on screen as displayed on the opposite
page.*/
#include<iostream>
#include <string>
using namespace std;

int main(){
    int articleNumber,numberOfPieces;
    double pricePerPiece;

    cout <<"Entre the article number: ";
    cin >> articleNumber;

    cout <<"Entre the Number of pieces: ";
    cin >> numberOfPieces;

    cout << "Entrer the price per piece";
    cin >> pricePerPiece;

    cout << "\nArticle Number" << "\tNumber of Pieces" << "\tPrice per Piece"<< endl;
    cout << articleNumber << "\t\t" << numberOfPieces << "\t\t\t" << pricePerPiece;
    


}