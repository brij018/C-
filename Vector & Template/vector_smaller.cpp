#include<iostream>
#include<string>
#include<vector>

using namespace std;




 int main(){


    vector<int> arr  = {2, 3, 5, 7, 4, 8, 2, 5};

    for(int i=1; i<arr.size()-1; i++)
    {
        if(arr[i-1] > arr[i] && arr[i] < arr[i+1]){
            cout << arr[i] << endl;
        }
    }


    return 0;
 }