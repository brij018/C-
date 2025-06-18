#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter the size of the square array: ";
    cin >> size;

    int arr[size][size];
    int arrTranspose[size][size];

    for(int i=0; i<size; i++){
        for(int j=0;j<size;j++){
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << "--------------------" << endl;
    }

    cout << "The transpose matrix of the array: " << endl;
    for(int i=0; i<size; i++){
        for(int j=0;j<size;j++){

            arrTranspose[i][j]=arr[j][i]; 
            
        }
    }
    for(int i=0; i<size; i++){
        for(int j=0;j<size;j++){
            cout << arrTranspose[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}