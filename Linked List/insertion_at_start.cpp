#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* Head = nullptr;

    Node(){
        next = nullptr;
    }
    Node(int value){
        data = value;
        next = nullptr;
    }

    void insertAtStart(int value){
        Node* ptr = new Node(value);
        ptr->next = Head;
        Head = ptr;
    }
    void display(){
        Node* temp = Head;
        while(temp != nullptr){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){

    Node ptr;
    ptr.insertAtStart(10);
    ptr.insertAtStart(20);
    ptr.insertAtStart(30);

    ptr.display();
    return 0;
}