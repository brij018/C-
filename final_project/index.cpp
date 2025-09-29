#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next=nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() { head = nullptr; }

    void insertAtpos(int val, int pos) {
        Node* newNode = new Node(val);
        if (pos == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
                temp = temp->next;
            }
            if (temp == nullptr) {
                cout << "Out of range!!!" << endl;
                delete newNode;
            } else {
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }

    void deleteAtPosition(int pos) {
        if (head == nullptr) {
            cout << "Empty list...!!" << endl;
            return;
        }
        if (pos == 0) {
            Node* temp = head;
            head = temp->next;
            delete temp;
        } else {
            Node* temp = head;
            for (int i = 0; i < pos - 1 && temp->next != nullptr; i++) {
                temp = temp->next;
            }
            if (temp->next == nullptr) {
                cout << "Invalid position.!!!" << endl;
            } else {
                Node* nodeToDel = temp->next;
                temp->next = nodeToDel->next;
                delete nodeToDel;
            }
        }
    }

    void update(int val, int pos) {
        Node* temp = head;
        for (int i = 0; i < pos && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Invalid Position.!!!" << endl;
        } else {
            temp->data = val;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid + 1;
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= end) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++) arr[start + k] = temp[k];
}

void mergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int partition(vector<int>& arr, int start, int end) {
    int idx = start - 1;
    int pivot = arr[end];
    for (int i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int pvtIndex = partition(arr, start, end);
        quickSort(arr, start, pvtIndex - 1);
        quickSort(arr, pvtIndex + 1, end);
    }
}

int binarySearch(vector<int>& arr, int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == arr[mid]) return mid;
        else if (key < arr[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 5, 7, 6, 4, 3, 8};
    LinkedList list;

    int c1 = -1;
    while (c1 != 0) {
        cout << "===================" << endl;
        cout << "1: Linked List" << endl;
        cout << "2: Merge Sort" << endl;
        cout << "3: Quick Sort" << endl;
        cout << "4: Binary Search" << endl;
        cout << "0: Exit" << endl;
        cout << "===================" << endl;
        cout << "Enter Your Choice: ";
        cin >> c1;

        switch (c1) {
        case 1: {
            int c2 = -1;
            while (c2 != 0) {
                cout << "===================" << endl;
                cout << "1: Insert" << endl;
                cout << "2: Delete" << endl;
                cout << "3: Update" << endl;
                cout << "4: Display" << endl;
                cout << "0: Back to Main" << endl;
                cout << "===================" << endl;
                cout << "Enter Your Choice: ";
                cin >> c2;

                int val, pos;
                switch (c2) {
                case 1:
                    cout << "Value: ";
                    cin >> val;
                    cout << "Position: ";
                    cin >> pos;
                    list.insertAtpos(val, pos);
                    break;
                case 2:
                    cout << "Position: ";
                    cin >> pos;
                    list.deleteAtPosition(pos);
                    break;
                case 3:
                    cout << "Value: ";
                    cin >> val;
                    cout << "Position: ";
                    cin >> pos;
                    list.update(val, pos);
                    break;
                case 4:
                    cout << "Your LinkedList: ";
                    list.display();
                    break;
                default:
                    cout << "Returning To Main Menu....." << endl;
                    break;
                }
            }
            break;
        }

        case 2:
            cout << "Original Array: ";
            for (int x : arr) cout << x << " ";
            cout << endl;
            mergeSort(arr, 0, arr.size() - 1);
            cout << "Sorted Array (MergeSort): ";
            for (int x : arr) cout << x << " ";
            cout << endl;
            break;

        case 3:
            cout << "Original Array: ";
            for (int x : arr) cout << x << " ";
            cout << endl;
            quickSort(arr, 0, arr.size() - 1);
            cout << "Sorted Array (QuickSort): ";
            for (int x : arr) cout << x << " ";
            cout << endl;
            break;

        case 4: {
            int key;
            cout << "Enter key to search: ";
            cin >> key;
            mergeSort(arr, 0, arr.size() - 1);
            int result = binarySearch(arr, arr.size(), key);
            if (result != -1)
                cout << "Element found at index " << result << endl;
            else
                cout << "Element not found!" << endl;
            break;
        }

        case 0:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}
