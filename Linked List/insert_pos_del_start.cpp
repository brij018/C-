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

    void insertAtPos(int pos, int value){
        if(pos == 0){
            insertAtStart(value);
        }
        else{
           Node* newNode = new Node(value);
           Node* temp = Head;
           
           for(int i=0;i<pos-1 && temp != nullptr; i++){
                temp = temp->next;
           }
           if(temp==nullptr){
                cout << "Out of Range!!!" << endl;
           }
           else{
                newNode->next=temp->next;
                temp->next=newNode;
           }

        }
    }

    void deleteAtStart(){

        if(Head == nullptr){

            cout << "empty list" <<endl;
            return;
        }

        Node * temp = Head;
        Head = temp->next;
        delete temp;
    
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
    ptr.insertAtPos(1,55);
    ptr.deleteAtStart();

    ptr.display();
    return 0;
}