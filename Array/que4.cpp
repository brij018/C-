#include<iostream>
using namespace std;

int main(){

    int rows,cols,rowNo,colNo;
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

    cout << "Enter the number of row: ";
    cin >> rowNo;
    int sumRow = 0;

    for(int j=0;j<cols;j++){
        sumRow += arr[rowNo][j];
        
    }
    cout << "Elements of row " << rowNo << ": ";
    for(int j=0;j<cols;j++){
        cout << arr[rowNo][j] << ", ";
    }
    cout << endl;
    if (rowNo < rows)
    {
        cout << "Sum of the " << rowNo << "th row is: " << sumRow << endl;
    }
    else{
        cout << "Invalid row number.....!!!!!" << endl;
    }
    cout << "Enter the number of column: ";
    cin >> colNo;
    int sumCol = 0;

    for(int i=0;i<rows;i++){
        sumCol += arr[i][colNo];
        
    }
    cout << "Elements of col " << colNo << ": ";
    for(int i=0;i<rows;i++){
        cout << arr[i][colNo] << ", ";
    }
    cout << endl;
    if (colNo < cols)
    {
        cout << "Sum of the " << colNo << "th column is: " << sumCol << endl;
    }
    else{
        cout << "Invalid column number.....!!!!!" << endl;
    }
    
    


    return 0;
}