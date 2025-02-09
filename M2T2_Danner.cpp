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
    string name;         // name variable
    int num_apples;         // apples bought variable
    double price_each;       // price per apple variable

    // receipt text
    cout << "Hello, please enter your name: " << endl;
    cin >> name; //name input
    cout << "Welcome to the " << name << " apple farm." << endl;
    cout << "How many apples would you like to purchase?" << endl;
    cin >> num_apples; //apple amount input
    cout << "Number of apples to be purchased: " << num_apples << endl;
    cout << "how much would you like to buy each apple for?" << endl;
    cin >> price_each;
    cout << "The price per apple is: $" << price_each << endl;
    cout << endl;

    // Calculations
    double total_cost = num_apples * price_each;

    // output print
    cout << fixed << setprecision(2); // this makes it print 25.00 instead of 25
    cout << "The total for all " << num_apples << " is $" << total_cost << endl;

    return 0;

}