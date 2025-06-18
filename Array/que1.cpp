#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }


    cout << "Negative elements from array: ";
    for(int i=0; i<size; i++){
       
        if (arr[i]<0)
        {           
            
            cout << arr[i] << ", ";
        }
    }



    return 0;
}