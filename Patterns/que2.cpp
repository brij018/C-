#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter the size: ";
    cin >> n;
    int ele = 11;
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout << ele << " ";
            ele++;
        }
        cout << endl;
    }
    
    

    return 0;
}