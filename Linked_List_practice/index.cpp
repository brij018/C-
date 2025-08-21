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
    void insert_at_beginning(int value){
        Node* newNode = new Node(value);

        if(head==nullptr){
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void Delete_node(int pos){

        if(pos == 0){
            if(head == nullptr){
                cout << "Empty list...!!" << endl;
            }
            else{
                Node* temp = head;
                head = temp->next;
                delete temp;
            }
        }
        else{
            Node* temp = head;

            for(int i=0;i<pos-1&&temp->next != nullptr;i++){
                temp = temp->next;
            }
            if(temp->next==nullptr){
                delete head;
                head=nullptr;
            }
            else{
                Node* nodeToDel = temp->next;
                temp->next=nodeToDel->next;
                delete nodeToDel;
            }
        }
    }
    void Search(int pos){
        Node* temp = head;
        for(int i =0; i<pos&&temp!= nullptr;i++){
            temp= temp->next;
        }
        if(temp == nullptr ){
            cout<< "out of range" << endl;;
        }
        else{
            cout <<"Data at position " << pos << " is: "<< temp->data << endl;
        }
    }
    void reverse(){
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;

        while(curr != nullptr){
            next = curr->next;   
            curr->next = prev;   
            prev = curr;        
            curr = next;         
        }
        head = prev;
        cout << "Reversed list: ";
        display(); 
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

    Node ptr;
    ptr.insert_at_beginning(10);
    ptr.insert_at_beginning(20);
    ptr.insert_at_beginning(30);
    ptr.insert_at_beginning(40);
    ptr.insert_at_beginning(50);

    ptr.Delete_node(2);
    
    ptr.Search(2);

    ptr.reverse();

    return 0;
}