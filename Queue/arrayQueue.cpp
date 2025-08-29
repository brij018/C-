#include<iostream>
using namespace std;
#define SIZE 5
class arrQueue{

    int arr[SIZE];
    int front, rear;

    public:
    arrQueue(){
        front=rear=-1;
    }
    void enqueue(int val){
        if(rear == SIZE - 1){
            cout << "queue is full." << endl;
        }
        else{
            if(front==-1) front = 0;
            arr[++rear] = val;
            cout << val << " is added to queue." << endl;
        }
    }
    void dequeue(){
        if(front==-1 || front > rear){
            cout << "Queue is empty." << endl;
        }
        else{
            cout << arr[front] <<" is removed from the queue." << endl;
            front++;
        }
    }   
    void peek(){
        if(front==-1 || front > rear){
            cout << "Queue is empty." << endl;
        }
        else{
            cout << arr[front] <<" is the front element of the queue." << endl;
        }
    }
    void display(){
        if(front==-1 || front > rear){
            cout << "Queue is empty." << endl;
        }
        else{
            for(int i = front; i<=rear;i++){
                cout << arr[i] <<  " "  << " ";
            }
            cout << endl;
        }
    }
};  

int main(){
    arrQueue q;

    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.peek();
    q.display();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.display();

    return 0;
}