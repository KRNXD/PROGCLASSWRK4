//Class: CMSC140 CRN
//Instructor: Prof. Koo 
//Classwork/Homework/<4>
//Description: Develop  a program that asks for the number of tickets sold and computes the total cost of the purchase at Walt Disney World
//I have not given my code to any student.
//Print your Name here: Kieran Yalla

#include <iostream>
using namespace std;

int main(){
    int colors;
    char lightedsign, oldsign;
    double total, base;
    
    cout << "Enter the number of colors in the sign: ";
    cin >> colors;
    cout << "Do you want a lighted sign (y/n)? ";
    cin >> lightedsign;
    cout << "Do you need an old sign removed (y/n)? ";
    cin >> oldsign;
    
    switch(colors){
        case 1:
            base = 250;
            break;    
        case 2:
            base = 250;
            break; 
        case 3:
            base = 250;
            break; 
        case 4:
            base = 250;
            break; 
        default:
            base = 850;
            break; 
    }
    if(lightedsign == 'y')
        total = base + base*25/100;
    
    if(oldsign == 'y')
        total = total + base*10/100;
    
    
    cout << "The price is: $" << total;
    
    return 0;
}
