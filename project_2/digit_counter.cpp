#include<iostream>
using namespace std;
int main(){

    int x;
    cout << "Insert a Digit :";
    cin >> x;
    int digit = x;
    int count = 0;

    while (digit > 0)
    {
        count++;
        digit = digit/10;
    }
    
    cout << "No. of Digits in " << x << " is " << count << endl;


}