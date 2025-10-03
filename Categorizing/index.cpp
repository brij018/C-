#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int arr[], int n){  
    for(int i=0; i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void merge(vector<int> &arr,int start,int mid,int end){
    vector<int> temp;
    int i=start,j=mid+1;
    while(i<=mid&&j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }
    for(int k=0;k<temp.size();k++) arr[start+k]=temp[k];
}

void mergeSort(vector<int> &arr, int start, int end){
    if(start<end){
        int mid=start+((end-start)/2);
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int binarySearch(vector<int> &arr, int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int choice;
    while(true) {
        cout << "\n--- MENU ---\n";
        cout << "1. Selection Sort\n";
        cout << "2. Merge Sort\n";
        cout << "3. Binary Search\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            selectionSort(arr,n);
            cout << "Array after Selection Sort: ";
            for(int i=0;i<n;i++) cout << arr[i] << " ";
            cout << endl;
        }
        else if(choice == 2) {
            vector<int> v(arr, arr+n);
            mergeSort(v,0,n-1);
            cout << "Array after Merge Sort: ";
            for(int x: v) cout << x << " ";
            cout << endl;
        }
        else if(choice == 3) {
            vector<int> v(arr, arr+n);
            mergeSort(v,0,n-1);
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            int result = binarySearch(v,n,key);
            if(result!=-1)
                cout << "Element found at index " << result << endl;
            else
                cout << "Element not found" << endl;
        }
        else if(choice == 4) {
            cout << "Exiting program." << endl;
            break;
        }
        else {
            cout << "Invalid choice, try again!" << endl;
        }
    }

    return 0;
}
