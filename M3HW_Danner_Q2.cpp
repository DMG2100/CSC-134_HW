/*
CSC 134
M3HW1 - Silver
Tylan Danner
03/09/2025
*/

#include <iostream>
#include <iomanip>

using namespace std;
   
int main()
{
    // variables
    double order_total;
    int order_type;         // apples bought variable
    double order_price = 50;
    double tax;       // price per apple variable
    double tip = 10;

    cout << "What type of order is this? Dine In (1) or Carry Out (2)? ";
    cin >> order_type;

    // receipt text
    if (order_type == 1)
    {
        tax = order_price * 0.15;
        order_total = (order_price + tax + tip);
        cout << fixed << setprecision(2);
        cout << "Meal price: $" << order_price << endl;
        cout << fixed << setprecision(2);
        cout << "Taxes: $" << tax << endl;
        cout << fixed << setprecision(2);
        cout << "Tip: $" << tip << endl;
        cout << fixed << setprecision(2);
        cout << "Order Total Price: $" << order_total << endl;
        
    }
    else if (order_type == 2)
    {
        tax = order_price * 0.15;
        order_total = order_price + tax;
        cout << fixed << setprecision(2);
        cout << "Meal price: $" << order_price << endl;
        cout << fixed << setprecision(2);
        cout << "Tax: $" << tax << endl;
        cout << fixed << setprecision(2);
        cout << "Order Total Price: $" << order_total << endl;
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    return 0;
}