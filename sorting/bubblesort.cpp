#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "your array: ";
    for(int e: arr){
        cout << e << " ";
    }
    cout << endl;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "sorted array: ";
    for(int e: arr){
        cout << e << " ";
    }
    cout << endl;

    return 0;
}