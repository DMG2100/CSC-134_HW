#include <iostream>
#include <cmath>

using namespace std;
  
double getWidth();
double getLength();
double getHeight();
double getVolume(double length, double width, double height);
void displayData(double vol);

int main()
{
    double width, length, height, volume;
    width = getWidth();
    length = getLength();
    height = getHeight();
    volume = getVolume(length, width, height);
    displayData(volume);
    return 0; // no errors

}

double getWidth() {
    double width;
    cout << "what is the Width of the block: ";
    cin >> width;
    if (width <= 0) {
        cout << "invalid number, try again." << endl;
        getWidth();
    } else {
        cout << "Width = " << width << endl;
        return width;
    }
}

double getLength() {
    double length;
    cout << "what is the Length of the block: ";
    cin >> length;
    if (length <= 0) {
        cout << "invalid number, try again." << endl;
        getLength();
    } else {
        cout << "Length = " << length << endl;
        return length;
    }
}

double getHeight() {
    double height;
    cout << "what is the Height of the block: ";
    cin >> height;
    if (height <= 0) {
        cout << "invalid number, try again." << endl;
        getHeight();
    } else {
        cout << "Height = " << height << endl;
        return height;
    }
}

double getVolume(double length, double width, double height) {
    double vol;
    vol = length * width * height;
    return vol;
}

void displayData(double vol) {
    cout << "[ volume of the block is: " << vol << " ]" << endl;
}