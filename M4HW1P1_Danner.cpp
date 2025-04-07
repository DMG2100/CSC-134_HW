/*
    Tylan Danner
    level bronze
*/
#include <iostream>

using namespace std;
  
int main()
{
    double number = 5;
    double multiplier = 1;
    double sum;
    while (multiplier <= 12)
    {
        sum = number * multiplier;
        cout << number << " times " << multiplier << " equals " << sum << "." << endl;
        multiplier++;
        
    }
    return 0; // no errors

}