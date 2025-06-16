#include<iostream>
using namespace std;

int main(){

    int size , in , choice , pos , ele;
     
    cout << "size: ";
     
    cin >> size; 
    
     
    int arr[100]; 
    
     
    for(int i=0;i<size;i++){
     
       cout << "arr[" << i << "]: ";
     
       cin >> arr[i];
     
    }
    
    while (choice !=0)
    {
        cout << "---------------------------------------" << endl;
        cout << "--> Press 1 to insert" << endl;
        cout << "--> Press 2 to Read" << endl;
        cout << "--> Press 3 to Update" << endl;
        cout << "--> Press 4 to Delete" << endl;
        cout << "--> Press 0 to Exit...!!!" << endl;
        cin >> choice;

        if (choice==1)
        {
            cout << " Press 1 to insert at start" << endl;
            cout << " Press 2 to insert at end" << endl;
            cout << " Press 3 to insert at a specific index" << endl;
            cin >> in;

            switch (in)
            {
            case 1:
                cout << "element: ";
                cin >> ele;
                for(int i=size;i>0;i--){
                    arr[i]=arr[i-1];
                }
                arr[0]=ele;
                size++;
                cout << "Element successfully inserted" << endl;
                break;
            case 2:
                cout << "element: ";
                cin >> ele;
            
                arr[size]=ele;
                size++;
                cout << "Element successfully inserted" << endl;
                break;
            case 3:
                cout << "Index: ";
                cin >> pos;
                cout << "element: ";
                cin >> ele;
                for(int i=size;i>pos;i--){
                    arr[i]=arr[i-1];
                }
                arr[pos]=ele;
                size++;
                cout << "Element successfully inserted" << endl;
                break;
            default: cout << "Invalid Input...!!!!";
                break;
            }
        }
        else if (choice==2)
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << ", ";
            }
            cout << endl;
        }
        else if (choice==3)
        {
            cout << "Index: ";
            cin >> pos;
            cout << "Element: ";
            cin >> ele;
            arr[pos]=ele;
            cout << "Element updated successfully" << endl;
        }
        else if (choice==4)
        {
            cout << " Press 1 to Delete from start" << endl;
            cout << " Press 2 to Delete from end" << endl;
            cout << " Press 3 to Delete from a specific index" << endl;
            cin >> in;

            switch (in)
            {
            case 1:
                for(int i=0;i<size;i++){
                    arr[i]=arr[i+1];
                }
                size--;
                cout << "Element successfully Deleted" << endl;
                break;
            case 2:
                size--;
                cout << "Element successfully Deleted" << endl;
                break;
            case 3:
                cout << "Index: ";
                cin >> pos;
                for(int i=pos;i<size;i++){
                    arr[i]=arr[i+1];
                }
                size--;
                cout << "Element successfully Deleted" << endl;
                break;
            default: cout << "Invalid Input...!!!!";
                break;
            }
        }
        else{
            cout << "Invalid Input.....!!!!!" << endl;
        }
        
    
    }
    


    return 0;
}