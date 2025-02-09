// CSC-134
// M2T1 - Apple Sales Receipt Calculator
// Tylan Danner
// 2/09/2025

#include <iostream>
#include <iomanip>
using namespace std;
   
int main()
{
    // variables
    string name = "Danner";         // name variable
    int num_apples = 100;           // apples bought variable
    double price_each = 0.25;       // price per apple variable

    // receipt text
    cout << "Welcome to the " << name << " apple farm." << endl;
    cout << "We have " << num_apples << " apples in stock." << endl;
    cout << "Price per apple is: $" << price_each << endl;
    cout << endl;

    // Calculations
    double total_cost = num_apples * price_each;

    // output print
    cout << fixed << setprecision(2); // this makes it print 25.00 instead of 25
    cout << "The total for all " << num_apples << " is $" << total_cost << endl;

    return 0;

}