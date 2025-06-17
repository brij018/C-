#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the size: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        if (i != n) {
            for (int s = 1; s <= 2 * (n - i); s++) {
                cout << "  ";
            }
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}