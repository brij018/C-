#include<iostream>
#include<stack>
using namespace std;

class Queue{

    stack<int> s1, s2;

    public:
    void enqueue(int val){
        s1.push(val);
        cout << val << " is added to the queue" << endl;
    }
    void dequeue(){
        if(s1.empty()&&s2.empty()){
            cout << "queue is empty" << endl;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            cout << s2.top() << " is removed from the queue" << endl;
            s2.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
    void peek(){
        if(s1.empty()&&s2.empty()){
            cout << "queue is empty" << endl;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            cout << s2.top() << " is the top element in queue" << endl;
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }

};

int main(){

    Queue q;

    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.peek();
    q.dequeue();
    q.peek();

    return 0;
}