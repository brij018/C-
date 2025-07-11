#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Template class
template <typename T>
class MemoryCalculate {

    private:
    T id;
    string name;

    public:
    // Constructor to initialize id and name
    MemoryCalculate(T i, string n) {
        id = i;
        name = n;
    }

    // Method to display student details
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Getter for id
    T getId() {
        return id;
    }
};

int main() {
    vector< MemoryCalculate<int> > students;
    int choice = -1;

    while(choice != 0){
        cout << endl << "==================================" << endl;;
        cout << "--- Student Management System ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "Enter 0 to Exit" << endl;
        cout << "==================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "==================================" << endl;
        if(choice == 1) {
            int id;
            string name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            students.push_back( MemoryCalculate<int>(id, name) );
            cout << endl << "----------------------------------" << endl;
            cout << "Student added successfully." << endl;
            cout << "----------------------------------" << endl;

        } else if(choice == 2) {
            cout << endl << "----------------------------------" << endl;
            cout << "List of Students: " << endl;
            cout << "----------------------------------" << endl;
            for(MemoryCalculate<int> e : students) {
                e.display();
            }

        } else if(choice == 3) {
            int searchId;
            cout << endl;
            cout << "Enter ID to remove: " << endl;
            cin >> searchId;

            bool found = false;
            for(int i = 0; i < students.size(); i++) {
                if(students[i].getId() == searchId) {
                    students.erase(students.begin() + i);
                    cout << endl << "----------------------------------" << endl;
                    cout << "Student removed successfully." << endl;
                    cout << "----------------------------------" << endl;
                    found = true;
                    break;
                }
            }
            if(!found)
                cout << endl << "----------------------------------" << endl;
                cout << "Student not found." << endl;
                cout << "----------------------------------" << endl;

        } else if(choice == 4) {
            int searchId;
            cout << endl;
            cout << "Enter ID to search: ";
            cin >> searchId;

            bool found = false;
            for(int i = 0; i < students.size(); i++) {
                if(students[i].getId() == searchId) {
                    cout << endl << "----------------------------------" << endl;
                    cout << "Student found: ";
                    students[i].display();
                    found = true;
                    cout << "----------------------------------" << endl;
                    break;
                }
            }
            if(!found){
                cout << endl << "----------------------------------" << endl;
                cout << "Student not found.";
                cout << endl << "----------------------------------" << endl;
            }

        } else if(choice == 0) {
            cout << endl << "----------------------------------" << endl;
            cout << "Exiting program." << endl;
            cout << "----------------------------------" << endl;
        } else {
            cout << endl << "----------------------------------" << endl;
            cout << "Invalid choice! Please try again.";
            cout << endl << "----------------------------------" << endl;
        }
    }

    return 0;
}
