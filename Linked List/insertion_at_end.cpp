#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* head = nullptr;

    Node(){
        next = nullptr;
    }
    Node(int value){
        data = value;
        next = nullptr;
    }
    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = newNode;
        }else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){

    Node newNode;
    newNode.insertAtEnd(10);
    newNode.insertAtEnd(20);
    newNode.insertAtEnd(30);

    newNode.display();

    return 0;
}