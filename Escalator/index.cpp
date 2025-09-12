#include <iostream>
using namespace std;

class Stack {
protected:
    int *arr;
    int topIndex;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[size];
        topIndex = -1;
    }

    int getCapacity() {
        return capacity;
    }

    virtual void push(int value) {
        if (isFull()) {
            cout << "Stack is full! Cannot push " << value << endl;
        } else {
            arr[++topIndex] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    virtual void pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Nothing to pop." << endl;
        } else {
            cout << arr[topIndex--] << " popped from stack." << endl;
        }
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == capacity - 1;
    }
};

class ExtendedStack : public Stack {
public:
    ExtendedStack(int size) : Stack(size) {}

    void push(int value) override {
        Stack::push(value);
    }

    void pop() override {
        Stack::pop(); 
    }
};

int main() {
    ExtendedStack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.pop();
    s.pop();

    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (s.isFull() ? "Yes" : "No") << endl;

    return 0;
}
