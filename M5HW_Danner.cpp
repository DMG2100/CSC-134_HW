#include <iostream>
#include <cmath>
#include <string>

using namespace std;
//stuff for question 1
double getRain1(), getRain2(), getRain3();
string getMonth1(), getMonth2(), getMonth3();
double averageRain(double rain1, double rain2, double rain3);
void displayData(string month1, string month2, string month3, double averageRain);


int main()
{
    string month1, month2, month3;
    double rain1, rain2, rain3, average;
    month1 = getMonth1();
    rain1 = getRain1();
    month2 = getMonth2();
    rain2 = getRain2();
    month3 = getMonth3();
    rain3 = getRain3();
    average = averageRain(rain1, rain2, rain3);
    displayData(month1, month2, month3, average);
    return 0; // no errors

}

double getRain1() {
    double rain1;
    cout << "how many inches of rain fell in the 1st month?: ";
    cin >> rain1;
    return rain1;
}

double getRain2() {
    double rain2;
    cout << "how many inches of rain fell in the 2nd month?: ";
    cin >> rain2;
    return rain2;
}

double getRain3() {
    double rain3;
    cout << "how many inches of rain fell in the 3rd month?: ";
    cin >> rain3;
    return rain3;
}

string getMonth1() {
    string month1;
    cout << "what is the 1st month?: ";
    cin >> month1;
    return month1;
}

string getMonth2() {
    string month2;
    cout << "what is the 2nd month?: ";
    cin >> month2;
    return month2;
}

string getMonth3() {
    string month3;
    cout << "what is the 3rd month?: ";
    cin >> month3;
    return month3;
}

double averageRain(double rain1, double rain2, double rain3) {
 double avg = (rain1 + rain2 + rain3)/3;
 return round(avg * 100) / 100;
}
void displayData(string month1, string month2, string month3, double averageRain) {
cout << "[ The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << averageRain << " inches. ]" << endl;
}