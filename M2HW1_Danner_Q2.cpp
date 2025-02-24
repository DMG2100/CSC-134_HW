#include <iostream>
#include <iomanip>
using namespace std;
// M2HW1 - SIlver
int main() {
    // Constants
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length, width, height;
    double volume, cost, charge, profit;

    // sets desired output formatting for numbers
    cout << setprecision(2) << fixed << showpoint;

    // Gets the crate dimensions from the user
    cout << "Enter the length of the crate (in feet): ";
    cin >> length;
    cout << "Enter the width of the crate (in feet): ";
    cin >> width;
    cout << "Enter the height of the crate (in feet): ";
    cin >> height;

    // Calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Displays the calculated data
    cout << "The volume of the crate is: " << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}