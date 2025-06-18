#include<iostream>
using namespace std;

int main(){

    int rows,cols;
    cout << "Enter the no. rows of array: ";
    cin >> rows;
    cout << "Enter the no. cols of array: ";
    cin >> cols;

    int arr[rows][cols];

    for(int i=0; i<rows; i++){
        for(int j=0;j<cols;j++){
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << "--------------------" << endl;
    }

    int lgNum=0;

    for(int i=0; i<rows; i++){
        for(int j=0;j<cols;j++){
            
            if(lgNum < arr[i][j]){
                lgNum=arr[i][j];
            }

        }
        
    }
    cout << "Largest number in the array: " << lgNum;

    return 0;
}