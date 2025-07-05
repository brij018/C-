#include<iostream>
#include<string>
using namespace std;

class BankAccount{

    private:
    
    int accountNumber;
    string accountHolderName;
    double balance;

    public:

    void setAccountDetails(int accNo, string name ,double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = (bal >= 0) ? bal : 0;
    }


    double getBalance(){
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }
    void displayAccountInfo(){
        cout << "Your Account Number: " << accountNumber << endl;
        cout << "Your Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

};

class SavingsAccount : public BankAccount{
    public:

    double interestRate;

    void calculateInterest(){
        cout << "Total Simple Interest is: " << getBalance() * interestRate / 100 << endl;   
    }

};

class CheckingAccount : public BankAccount{
    public:

    double overdraftLimit;
    void checkOverdraft(double amount){
        if(amount > overdraftLimit){
            cout << "Amount exceeds overdraft limit....!!!" << endl;

        }else{
            cout << "Overdraft OK. Proceeding with withdrawal." << endl;
            withdraw(amount);
        }
    }

};

class FixedDepositeAccount : public BankAccount{
    public:

    void calculateInterest(int time){
        float rate = 8.75;
        cout << "Fixed Deposite Interest: " << (getBalance() * rate * time) / (12 * 100) << endl;
    }
};

int main() {


    SavingsAccount sa;
    sa.setAccountDetails(20020, "Amit", 50000);
    sa.interestRate = 4.75;

    CheckingAccount ca;
    ca.setAccountDetails(20021, "Tejas", 35000);

    FixedDepositeAccount fda;
    fda.setAccountDetails(20022, "Anushka", 78000);


    int choice = -1, in = -1, amount;

    while (choice != 0) {
        cout << "------------------" << endl;
        cout << endl;
        cout << "Enter 1 to access Saving Account" << endl;
        cout << "Enter 2 to access Checking Account" << endl;
        cout << "Enter 3 to access Fixed Deposite Account" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << endl;
        cout << "------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "------------------" << endl;

        if(choice == 1){

            while(in != 0){

                cout << "------------------" << endl;
                cout << endl;
                cout << "Enter 1 to check balance" << endl;
                cout << "Enter 2 to withdraw" << endl;
                cout << "Enter 3 to deposit" << endl;
                cout << "Enter 4 to calculate Fixed interest" << endl;
                cout << "Enter 5 to see profile" << endl;
                cout << "Enter 0 to exit" << endl;
                cout << endl;
                cout << "------------------" << endl;
                cout << "Enter your choice: ";
                cin >> in;
                cout << "------------------" << endl;
                
                switch (in) {
                    case 1:
                        cout << "Your Balance: " << sa.getBalance() << endl;
                        break;
                    case 2:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        sa.withdraw(amount);
                        break;
                    case 3:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        sa.deposit(amount);
                        break;
                    case 4:
                        sa.calculateInterest();
                        break;
                    case 5:
                        sa.displayAccountInfo();
                        break;
                    case 0:
                        cout << "Exiting...";
                        cout << endl;
                        break;
                    default:
                        cout << "Feature not implemented yet." << endl;
                }
            }
            in = -1;
        }
        else if(choice == 2){

            while(in != 0){

                cout << "------------------" << endl;
                cout << endl;
                cout << "Enter 1 to check balance" << endl;
                cout << "Enter 2 to withdraw" << endl;
                cout << "Enter 3 to deposit" << endl;
                cout << "Enter 4 to see profile" << endl;
                cout << "Enter 0 to exit" << endl;
                cout << endl;
                cout << "------------------" << endl;
                cout << "Enter your choice: ";
                cin >> in;
                cout << "------------------" << endl;
                
                switch (in) {
                    case 1:
                        cout << "Your Balance: " << ca.getBalance() << endl;
                        break;
                    case 2:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        ca.checkOverdraft(amount);
                        break;
                    case 3:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        ca.deposit(amount);
                        break;
                    case 4:
                        ca.displayAccountInfo();
                        break;
                    case 0:
                        cout << "Exiting...";
                        cout << endl;
                        break;
                    default:
                        cout << "Feature not implemented yet." << endl;
                }
            }
            in = -1;
        }
        else if(choice == 3){

            while(in != 0){

                cout << "------------------" << endl;
                cout << endl;
                cout << "Enter 1 to check balance" << endl;
                cout << "Enter 2 to withdraw" << endl;
                cout << "Enter 3 to deposit" << endl;
                cout << "Enter 4 to calculate interest" << endl;
                cout << "Enter 5 to see profile" << endl;
                cout << "Enter 0 to exit" << endl;
                cout << endl;
                cout << "------------------" << endl;
                cout << "Enter your choice: ";
                cin >> in;
                cout << "------------------" << endl;
                
                switch (in) {
                    case 1:
                        cout << "Your Balance: " << fda.getBalance() << endl;
                        break;
                    case 2:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        fda.withdraw(amount);
                        break;
                    case 3:
                        cout << "Enter Amount: ";
                        cin >> amount;
                        fda.deposit(amount);
                        break;
                    case 4:
                        int time;
                        cout << "Enter time (in months): ";
                        cin >> time;
                        fda.calculateInterest(time);
                        break;
                    case 5:
                        fda.displayAccountInfo();
                        break;
                    case 0:
                        cout << "Exiting...";
                        cout << endl;
                        break;
                    default:
                        cout << "Feature not implemented yet." << endl;
                }
            }
            in = -1;
        }
        else if(choice == 0){
            cout << "Exiting...";
            break;
        }
        else{
            cout << "Account type not available...!!!";
        }
    }

    return 0;
}

