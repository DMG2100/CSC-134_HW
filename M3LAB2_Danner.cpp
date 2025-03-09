#include <iostream>

using namespace std;
  
int main()
{
    //variables
    int score;

    //prompts
    cout << "please Enter Numerical Grade: ";
    cin >> score;

    //if statements
    if (score <= 59) {
        cout << "Letter Grade: F" << endl;
    }
    else if (score <= 69)
    {
        cout << "Letter Grade: D" << endl;
    }
    else if (score <= 79) {
        cout << "Letter Grade: C" << endl;
    }
    else if (score <= 89)
    {
        cout << "Letter Grade: B" << endl;
    }
    else if (score <= 100) {
        cout << "Letter Grade: A" << endl;
    }
    
    return 0; // no errors
}