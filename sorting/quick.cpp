#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&arr, int start, int end){
    int idx = start-1;
    int pivot = arr[end];
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            idx++;
            swap(arr[i],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quickSort(vector<int>&arr, int start, int end){
    if(start<end){
        int pivIdx = partition(arr,start,end);
        quickSort(arr,start,pivIdx-1);
        quickSort(arr,pivIdx+1,end);
    }
}

int main(){
    vector <int> arr = {8,9,1,6,2,3};
    quickSort(arr,0,arr.size()-1);
    cout << "Sorted array: ";
    for(int e:arr){
        cout << e << " ";  
    }
    cout << endl;
    return 0;
}