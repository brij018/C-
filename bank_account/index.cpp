#include<iostream>
#include<string>
using namespace std;

class Account{

    private:

    long long int accNo = 2547955454;
    string name = "Brij";
    string email = "brij@gmail.com";
    long long int phone = 7894561234;
    int balance = 6000;
    int pin = 2810;

    public:

    void checkbalance(int pin){
        if(this->pin == pin){
            cout << "Your Balance: " << balance << endl;
        }
        else{
            cout << "Invalid PIN.....!!" << endl;
        }
    }
    void withdraw(int pin , int amount){
        if(this->pin == pin){
            balance -= amount;
            cout << "Your Balance: " << balance << endl;
        }
        else{
            cout << "Invalid PIN.....!!" << endl;
        }
    }
    void deposite(int pin , int amount){
        if(this->pin == pin){
            balance += amount;
            cout << "Your Balance: " << balance << endl;
        }
        else{
            cout << "Invalid PIN.....!!" << endl;
        }
    }
    void profile(){
        if(this->pin == pin){
            cout << "Your Name: " << name << endl;
            cout << "Your Email: " << email << endl;
            cout << "Your Phone Number: " << phone << endl;
        }
        else{
            cout << "Invalid PIN.....!!" << endl;
        }
    }


};

int main() {
    Account user;
    int choice = -1, pin, amount;

    while (choice != 0) {
        cout << "------------------" << endl;
        cout << endl;
        cout << "Enter 1 to check balance" << endl;
        cout << "Enter 2 to withdraw" << endl;
        cout << "Enter 3 to deposit" << endl;
        cout << "Enter 4 to see profile" << endl;
        cout << "Enter 5 to edit profile" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << endl;
        cout << "------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "------------------" << endl;

        switch (choice) {
            case 1:
                cout << "Enter PIN: ";
                cin >> pin;
                user.checkbalance(pin);
                break;
            case 2:
                cout << "Enter PIN: ";
                cin >> pin;
                cout << "Enter Amount: ";
                cin >> amount;
                user.withdraw(pin, amount);
                break;
            case 3:
                cout << "Enter PIN: ";
                cin >> pin;
                cout << "Enter Amount: ";
                cin >> amount;
                user.deposite(pin, amount);
                break;
            case 4:
                cout << "Enter PIN: ";
                cin >> pin;
                user.profile();
                break;
            case 0:
                cout << "Exiting...";
                cout << endl;
                break;
            default:
                cout << "Feature not implemented yet." << endl;
        }
    }

    return 0;
}
