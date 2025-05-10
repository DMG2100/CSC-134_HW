#include <iostream>
using namespace std;


void main_menu();
void break_out();
void stay_still();
void give_up();
void fight();
void death1();
void death2();
void tool_escape();
void use_force();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - the ship" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You wake up in an alien ship strapped to a table..." << endl;
  cout << "Do you:" << endl;
  cout << "1. break out of the restraints" << endl;
  cout << "2. Stay still" << endl;
  cout << "3. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    break_out();
  } else if (2 == choice) {
    stay_still();
  } else if (3 == choice) {
    cout << "Ok, ending life" << endl;
    return; // go back to main()
  } else {
    cout << "That's not an option, try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

void look_around() { 
    cout << "you notice a small superheated blade on the floating cart next to you." << endl;
    cout <<  "the cart is just enough in your reach to take it before the restraints magnetically snap back into place." << endl;
    cout << "1. take the blade and escape." << endl;
    cout << "2. stay still." << endl;
    cout << "choose: ";
    int choice;
    cin >> choice;
    if (1 == choice) {
        tool_escape();
    } else if (2 == choice) {
        cout << "after a while of looking around and not trying to escape." << endl;
        death1();
    } else {
        cout << "That's not an option, try again." << endl;
        cin.ignore();
        look_around();
    }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void break_out() {
  cout << "Break out of the restraints" << endl;
  cout << "they're locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. look around" << endl;
  cout << "2. force the restraints off" << endl;
  cout << "3. give up" << endl;
  int choice;
  cout << "choose: ";
  cin >> choice;
  if (1 == choice) {
    look_around();
  } else if (2 == choice) {
    cout << "you snap away from your restraints with herculian effort and escape the table." << endl; 
    use_force();
  } else if (3 == choice) {
    give_up();
  } else {
    cout << "That's not an option, try again." << endl;
    cin.ignore();
    break_out();
  }
}

void stay_still() {
    give_up();
}



void use_force() { 
    cout << "you see a weapon not meant for your hands on the wall." << endl;
    cout << "1. take it." << endl;
    cout << "2. leave it." << endl;
    cout << "choose: ";
    int choice;
    cin >> choice;
    if (1 == choice) {
        fight();
    } else if (1 == choice) {
        death1();
    } else {
        cout << "That's not an option, try again." << endl;
        cin.ignore();
        use_force();
    }
    
}

void tool_escape() {
    cout << "you take the superheated blade and slice through the restraints." << endl;
    use_force();
}

void fight() {
    cout << "the alien comes back with a superheated blade." << endl;
    cout << "the alien panics upon seeing you with it's weapon and attempts to approach you with the blade." << endl;
    cout << "1. shoot the alien." << endl;
    cout << "2. throw the weapon at the alien and run." << endl;
    cout << "choose: ";
    int choice;
    cin >> choice;
    if (1 == choice) {
        cout << "upon finding the trigger, you blast the alien into pieces and escape the ship." << endl;
    } else if (2 == choice) {
        death2();
    } else {
        cout << "That's not an option, try again." << endl;
        cin.ignore();
        fight();
    }
}

void death1() { 
cout << "the alien comes back with a superheated blade." << endl;
cout << "the alien panics upon seeing you loose and knocks you out, putting you back on the table in new restraints." << endl;
cout << "after having a mild panic attack upon seeing you loose, the alien comes back with a superheated blade and cuts you open from temple to foot";
}

void death2() {
    cout << "you throw the weapon at the alien and it catches it." << endl;
    cout << "the last thing you see in your desperate scramble to escape is the anger in the aliens eyes" << endl; 
    cout << " and the barrel of its weapon pointed at the back of your head before everything turns black." << endl;
}

void give_up() {cout << "the alien comes back with a superheated blade and cuts you open from temple to foot." << endl;}
