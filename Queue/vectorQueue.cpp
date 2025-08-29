#include<iostream>
#include<vector>
using namespace std;

class vectorQueue{

    vector<int> q;
    public:
    void enqueue(int val){
        q.push_back(val);
        cout << val << " added to queue." << endl;
    }
    void dequeue(){
        if(q.empty()){
            cout << "Queue is empty." << endl;
        }
        else{
            cout << q.front() << " is removed from the queue." << endl;
            q.erase(q.begin());
        }
    }
    void peek(){
        if(q.empty()){
            cout << "Queue is empty." << endl;
        }
        else{
            cout << q.front() << " is the top element of the queue." << endl;
        }
    }
    void display(){
        if(q.empty()){
            cout << "Queue is empty." << endl;
        }
        else{
            cout << "Queue elements are: ";
            for(int e: q){
                cout << e << " ";
            }
            cout << endl;
        }
    }
};

int main(){

    vectorQueue q;

    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.peek();
    q.display();
    q.dequeue();
    q.peek();
    q.display();

    return 0;
}