#include <iostream>

using namespace std;
  
int main()
{
  //variables:
    int widthOne;
    int lengthOne;
    int widthTwo;
    int lengthTwo;
    int areaOne;
    int areaTwo;

  //input ask:
    cout << "Please enter the width and height of the first\n";
    cout << "rectangle, separated by a space or new line" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the second\n";
    cout << "rectangle, separated by a space or new line" << endl;
    cin >> widthTwo >> lengthTwo;

  //calculations:
    areaOne = widthOne + lengthOne;
    areaTwo = widthTwo + lengthTwo;

  //result display:
  cout << "Rectangle one has an area of " << areaOne << endl;
  cout << "Rectangle two has an area of " << areaTwo << endl;

  //determine which is bigger:
  if (areaOne > areaTwo) {
    cout << "Rectangle one is larger of the two in regards to area." << endl;
  } 
  else if (areaOne < areaTwo) {
    cout << "Rectangle two is larger of the two in regards to area." << endl;
  } 
  else if (areaOne == areaTwo) {
    cout << "Rectangle one and two are equal in area." << endl;
  }
  cout << "Thanks for using the program!" << endl;
}
