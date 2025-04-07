/*
CSC 134
M3HW1 - Silver
Tylan Danner
03/09/2025
*/

#include <iostream>

using namespace std;
  
int main()
{
    int random_number1 = rand() % 9 + 1;
    int random_number2 = rand() % 9 + 1;
    int user_input;
    int answer = random_number1 + random_number2;

    cout << "What is " << random_number1 << " + " << random_number2 << "?" << endl;
    cin >> user_input;
    if (user_input == answer)
    {
        cout << "Correct!";

    }
    else
    {
        cout << "Incorrect.";
    }
    return 0;

}