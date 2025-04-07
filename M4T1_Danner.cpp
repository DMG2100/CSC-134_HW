#include <iostream>

using namespace std;
  
int main()
{
    int n = 0;
    int c = 5;
    while (n < c)
    {
        cout << "Hello\n";
        n++;
    }
    cout << "That's All Folks!\n";

const int min_n = 1, max_n = 10;

int counter = min_n;

cout << "number          number squared\n";
cout << "------------------------------\n";
while (counter <= max_n)
{
    cout << counter << "\t\t" << (counter * counter) << endl;
    counter++;
}

    return 0; // no errors

}