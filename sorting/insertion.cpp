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
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout << "sorted array: ";
    for(int e: arr){
        cout << e << " ";
    }
    cout << endl;

    return 0;
}