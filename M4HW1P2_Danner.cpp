/*
    Tylan Danner
    level silver
*/
#include <iostream>

using namespace std;
  
int main()
{
    int number;
    int multiplier;
    int sum;
    cout << "Enter Number to Multiply to 12: ";
    cin >> number;
    if (number <= 12)
    {

        while (multiplier <= 12)
        {
            sum = number * multiplier;
            cout << number << " times " << multiplier << " equals " << sum << "." << endl;
            multiplier++;
            
        }

    } else

    {
        cout << "Invalid Number" << endl;
    }
    return 0; // no errors

}