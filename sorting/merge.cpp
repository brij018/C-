#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr, int start, int mid, int end){
    vector<int>temp;
    int i=start, j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++) arr[start+k]=temp[k];
}
void mergeSort(vector<int>&arr, int start, int end){
    if(start<end){
        int mid = start + (end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){

    vector<int> arr = {9, 4, 3, 8, 7, 1, 5, 2,};
    mergeSort(arr,0,arr.size()-1);
    cout << "Sorted array: ";
    for(int x :arr){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}