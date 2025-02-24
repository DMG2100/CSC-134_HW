#include <iostream>

using namespace std;
  
int main()
{
    //variables:
    double balance = 10000.00;
    double withdraw_amount;
    double deposit_amount;
    double input;
    double end_balance;
    string name;
    string acc_num;
    // 
    cout << "what's your name?" << endl;
    cin >> name;
    cout << "Hello " + name + ", Welcome To Your Bank Account!" << endl;
    cout << "To Login, Please Enter Your Account Number Below." << endl;
    cin >> acc_num;
    cout << "Account Number " + acc_num + " Confirmed!" << endl;
    cout << "If You Would Like To Withdraw Money, Press 1." << endl;
    cout << "If You Would Like To Depost Money, Press 2." << endl;
    cin >> input;
    if (input == 1) {
        cout << "How Much Would You Like To Withdraw?" << endl;
        cin >> withdraw_amount;
        if (withdraw_amount > balance) {
            cout << "Error: insufficient funds." << endl;
            return 1;
        }
        end_balance = balance - withdraw_amount;
        cout << "Withdrawing " << withdraw_amount << ". current balance = " << end_balance << "." << endl;
        cout << "Logging Out User: " << name << ", Account Number: " << acc_num << ". Current Balance: " << end_balance << ". Thanks For Your Support!" << endl;
        
    } else if (input == 2) {
        cout << "How Much Would You Like To Depost?" << endl;
        cin >> deposit_amount;
        if (deposit_amount < 0) {
            cout << "insufficient deposit amount" << endl;
            return 1;
        }
        end_balance = balance + deposit_amount;
        cout << "Depositing " << deposit_amount << ". Current Balance = " << end_balance << "." << endl;
        cout << "Logging Out User: " << name << ", Account Number: " << acc_num << ". Current Balance: " << end_balance << ". Thanks For Your Support!" << endl;
        return 1;
    } else {
        cout << "invalid option." << endl;
        return 1;
    }
    return 0; // no errors

}