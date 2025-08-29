#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};
class LinkedListQueue{
    Node* front;
    Node* rear;
    public:
    LinkedListQueue(){
        front=rear=nullptr;
    }
    void enqueue(int val){
        Node* newNode = new Node(val);

        if(rear == nullptr){
            front = rear = newNode;
        }else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " added in queue" << endl;
    }
    void dequeue(){

        if(front == nullptr){
            cout << " queue is empty" << endl;
        }
        else{
            Node* temp = front;
    
            cout << front->data << " is removed from queue" << endl;
    
            front = front->next;
    
            if(front == nullptr){
                rear = nullptr;
            }
            delete temp;
        }
    }
    void peek(){

        if(front == nullptr){
            cout << " queue is empty" << endl;
        }
        else{
            cout << front->data << " is the front element in queue" << endl;
        }
    }
    void display(){

          if(front == nullptr){
            cout << " queue is empty" << endl;
        }
        else{
            Node* temp = front;
    
            cout << "queue element are ";
            while(temp!=nullptr){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout<< endl;
        }
    }
};


int main(){

    LinkedListQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.display();



    return 0;
}