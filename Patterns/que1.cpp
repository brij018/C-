#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter the size: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int ele = 41;
        for (int j = 1; j <= i; j++)
        {
            cout << ele << " ";
            ele++;
        }
        cout << endl;
    }
    
    

    return 0;
}