//Class: CMSC140 CRN
//Instructor: Prof. Koo 
//Classwork/Homework/<4>
//Description: Develop  a program that asks for the number of tickets sold and computes the total cost of the purchase at Walt Disney World
//I have not given my code to any student.
//Print your Name here: Kieran Yalla

#include <iostream>
using namespace std;

int main(){
    double ticketprice = 109, total_cost;
    int days;
    
    cout << "How many days of tickets were sold? ";
    cin >> days;
    
    if (days<=0)
        cout << "Tickets sold must be greater than zero.";
    else {
        if(days<3)
            total_cost = ticketprice * days;
        else if(days<5)
            total_cost = ticketprice * days * (90) / 100;
        else if(days<7)
            total_cost = ticketprice * days * (75) / 100;
        else if(days<10)
            total_cost = ticketprice * days * (67) / 100;
        else
            total_cost = ticketprice * days * (58) / 100;
    
        cout << "The total cost of the purchase is $" << total_cost;
    }
    return 0;
}