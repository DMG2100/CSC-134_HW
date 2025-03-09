#include <iostream>
#include <cstdlib>

using namespace std;

class Fight {
public:
    void fighting(string choice, int& damage, int& enemy_health) {
        if (choice == "fight") {
            int dice_roll = rand() % 6 + 1;
            if (dice_roll == 1) {
                damage = 15;
            } else if (dice_roll == 2) {
                damage = 30;
            } else if (dice_roll == 3) {
                damage = 30;
            } else if (dice_roll == 4) {
                damage = 60;
            } else if (dice_roll == 5) {
                damage = 80;
            } else if (dice_roll == 6) {
                damage = 100;
            }

            enemy_health -= damage;  // Subtract damage from enemy's health
            cout << "Enemy Took " << damage << " Damage" << endl;
            cout << "Enemy Has " << enemy_health << " Left." << endl;
        }
    }
};

int main() {
    int damage = 0;
    int enemy_health = 100;
    string choice;
    string loop;

    Fight fightObject;

    do {
        cout << "An Enemy Approaches!" << endl;
        cout << "*******************************************************************************" << endl;
        cout << "Will You Fight or Flee?" << endl;
        cout << "Choose: ";
        cin >> choice;

        if (choice == "fight") {
            fightObject.fighting(choice, damage, enemy_health);
        } else {
            cout << "You fled the battle!" << endl;
            break;
        }

        if (enemy_health <= 0) {
            cout << "Enemy Slain!" << endl;
            cout << "Would you like to play again? Y or N? ";
            cin >> loop;

            if (loop == "Y") {
                enemy_health = 100;  // Reset enemy health
            } else {
                return 0;  // Exit the program
            }
        }

    } while (enemy_health > 0);  // Keep fighting until the enemy is slain

    return 0;
}