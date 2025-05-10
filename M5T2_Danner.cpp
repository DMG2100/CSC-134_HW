#include <iostream>

using namespace std;

int square(int number)
{
    return number * number;
}

void printAnswer(int number, int squared)
{
    cout << number << " sqaured is " << squared << endl;
}

  
int main()
{
    for (int n = 1; n <= 10; n++)
    {
        int num_squared = square(n);
        printAnswer(n, num_squared);
    }
    cout << endl;
    return 0; // no errors

}