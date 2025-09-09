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
    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout << "sorted array: ";
    for(int e: arr){
        cout << e << " ";
    }
    cout << endl;


    return 0;
}