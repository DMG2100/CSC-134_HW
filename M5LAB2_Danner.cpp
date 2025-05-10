// M5LAB2
// Header goes here

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength(), getWidth(), getArea(double lenth, double area);
void displayData(double length, double width, double area);


int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
     double length, width, area; // The rectangle's length
               // The rectangle's width
               // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
    area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength() {
    double length;
    cout << "What is the length?: ";
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "What is the width?: ";
    cin >> width;
    return width;
}

double getArea(double length, double width) {
    return length * width;
}
void displayData(double length, double width, double area) {
    cout << "[the length is: " << length << "]" << endl << "[the width is: " << width << "]" << endl << "[the area of the rectangle is: " << area << "]" << endl;

}
//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************