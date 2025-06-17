#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the size: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }

        for (int j = n - i + 1; j <= n; j++)
        {
            cout << j << " ";
        }

        for (int j = n - 1; j >= n - i + 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}