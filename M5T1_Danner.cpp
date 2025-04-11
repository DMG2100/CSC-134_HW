#include <iostream>

using namespace std;
  
void say_hi()
{
    cout << "Hi from say_hello!" << endl;
    return;
}

int get_answer()
{
    return 40;
}

int double_it(int n)
{
    int new_n = n *2;
    return new_n;
}

int main()
{
    cout << "Hello from main!" << endl;
    say_hi();
    int my_answer = get_answer();
    cout << "the answer is: " << my_answer << endl;
    int nx2 = double_it(7);
    cout << "a second answer: " << nx2 << endl;
    return 0; // no errors

}