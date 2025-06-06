#include<iostream>
using namespace std;

int main(){

    int x;

    cout << "Marks out of 100:";
    cin >> x;

    if (x>=0 && x<=100)
    {
        if (x>=90)
        {
        cout << "A grade" << endl;
        }
        else if (x>=80)
        {
        cout << "B grade" << endl;
        }
        else if (x>=65)
        {
        cout << "C grade" << endl;
        }
        else if (x>=50)
        {
        cout << "D grade" << endl;
        }
        else if (x>=35)
        {
        cout << "E grade" << endl;
        }
        else{
        cout << "F grade" << endl;
        }
    }
    else{
        cout << "Invalid Marks...!!" << endl;
    }

}