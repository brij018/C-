#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter the size: ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int k=1; k<i;k++)
        {
            cout << "  ";
        }
        
        for (int j = i; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}