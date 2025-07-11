#include<iostream>
#include<string>
using namespace std;

template<typename T>
class vector{

    private:
    int size;
    T *arr;

    public:

    vector(){
        this->size = 0;
        arr = new T[100];
    }
    vector(int size, T ele){
        this->size = size;
        arr = new T[100];
        for(int i=0; i<this->size; i++){
            arr[i] = ele;
            cout << arr[i] << endl;
            
        }
        cout << "============" << endl;
    }

    void push(T ele){
        arr[this->size]=ele;
        this->size++;
    }
    void pop(){
        this->size--;
    }
    void length(){
        cout << this->size << endl;
    }
    void print(){
        for(int i=0; i<this->size; i++){
            cout << arr[i] << ", ";
        }
        cout << endl;
    }

};


int main(){

    vector <int>arr;
    
    vector <int>para(5, 4);
   
    arr.push(2);
    arr.push(4);
    arr.push(6);
    arr.push(8);

    
    arr.pop();
    
    arr.length();
    arr.print();

    vector <char>str;

    str.push('a');
    str.push('z');
    str.push('b');

    str.length();
    str.print();

    cout << "----------------" << endl;


    vector <string>names;

    names.push("jonny");
    names.push("tom");
    names.push("bheem");
    names.length();
    names.print();
    return 0;
}