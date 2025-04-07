#include <iostream>
using namespace std;
  
int main()
{
    int width;
    int height;
    cout << "Input Height of Table: ";
    cin >> height;
    cout << "Input Width of Table: ";
    cin >> width;
    for (int counterh = 0; counterh < height; counterh++)
    {
        for (int counterw = 0; counterw < width; counterw++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0; // no errors

}