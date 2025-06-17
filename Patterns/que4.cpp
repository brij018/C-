#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter the size: ";
    cin >> n;

    for (int i = n; i > 0 ; i--)
    {

        for (int k=i; k < n;k++)
        {
            cout << "  ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            if (j%2!=0)
            {
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    
    

    return 0;
}