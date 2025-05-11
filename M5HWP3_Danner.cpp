#include <iostream>
#include <string>

using namespace std;

    string getRomNum(int number);
    void displayData(string roman);

int main()
{
    int number;
    string roman;
    cout << "enter a number between 1 and 10: ";
    cin >> number;
    roman = getRomNum(number);
    return 0; // no errors

}

string getRomNum(int number) {
    string rom;
    cout << "[ The Roman Numeral of " << number << " is: ";
    if (number < 1 || number > 10) {
        cout << "invalid input, try again." << endl;
        main();
    } else {
    if (number == 1) {
        rom = "I";
    } else if (number == 2) {
        rom = "II";
    } else if (number == 3) {
        rom = "III";
    } else if (number == 4) {
        rom = "IV";
    } else if (number == 5) {
        rom = "V";
    } else if (number == 6) {
        rom = "VI";
    } else if (number == 7) {
        rom = "VII";
    } else if (number == 8) {
        rom = "VIII";
    } else if (number == 9) {
        rom = "IX";
    } else if (number == 10) {
        rom = "X";
    }
    cout << rom << " ]" << endl;
    return rom;
}
}
