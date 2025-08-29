#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    cout << "First element: " << q.front() << endl;
    cout << "Last element: " << q.back() << endl;
    q.pop();
    cout << "First element: " << q.front() << endl;
}

