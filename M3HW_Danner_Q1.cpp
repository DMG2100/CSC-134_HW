#include <iostream>

using namespace std;
  
int main()
{
   //variables
   string input;
    cout << "Chat Bot: " << "Hello, I'm a C++ program!" << endl;
    cout << "Chat Bot: " << "Do you like me? please type yes or no." << endl;
    cin >> input;
    cout << "user: " << input << endl;
    if (input == "yes")
    {
        cout << "Chat Bot: " << "That's great! I'm sure we'll get along." << endl;\
        return 0;
    }
    else if (input == "no")
    {
        cout << "Chat Bot: " << "Well, maybe you'll learn to lime me later." << endl;
        return 0;
    }
    else 
    {
        cout << "Chat Bot: " << "If you're not sure... that's OK." << endl;
    }
    
}