#include<iostream>
using namespace std;
int main(){

    //all digits

    int x;
    cout << "Insert a Digit :";
    cin >> x;
    int digit = x;
    int sum = 0;

    while (digit > 0)
    {
        sum += digit%10;
        digit = digit/10;
    }
    
    cout << "Sum of all Digits of " << x << " is " << sum << endl;



    //first and last digit

    int num, firstDigit, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10; 

    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int addition = firstDigit + lastDigit;

    cout << "Sum of first and last digit = " << addition << endl;
    



}