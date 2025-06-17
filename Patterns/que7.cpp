#include <iostream>
using namespace std;

int main() {



    for (int i = 0; i < 5; i++) {
        
        if (i == 0 || i == 2) {
            for (int j = 0; j < 5; j++) {
                cout << "* ";
            }
        }
        
        else if (i == 1) {
            cout << "* ";
            for (int j = 0; j <3; j++) {
                cout << "  ";
            }
            cout << "* ";
        }
        
        else {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}