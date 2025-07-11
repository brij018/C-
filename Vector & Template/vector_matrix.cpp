#include<iostream>
#include<string>
#include<vector>

using namespace std;


 int main(){


    int n;
    cout << "n: ";
    cin >> n;

    vector<vector<int>> array;

    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++)
        {
            int a;
            cin >> a;
            temp.push_back(a) ;
        }
        array.push_back(temp);
    }
    

    for(vector<int> ele: array){
        for(int e: ele){
            cout << e << ", ";
        }
        cout << endl;
    }

      

    return 0;
 }