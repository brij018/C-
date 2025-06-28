#include<iostream>
using namespace std;


void sum(int a , int b){

    cout << "Addition: " << a+b << endl;

}
void sub(int a , int b){

    cout << "Subtraction: " << a-b << endl;

}
void mul(int a , int b){

    cout << "Multiplication: " << a*b << endl;

}
void divi(int a , int b){

    cout << "Divison: " << a/b << endl;

}
void mod(int a , int b){

    cout << "Modulus: " << a%b << endl;

}





int main(){

    int choice , snd , fst ;
     
    
    
    while (choice !=0)
    {
        cout << "---------------------------------------" << endl;
        cout << "--> Press 1 for +" << endl;
        cout << "--> Press 2 for -" << endl;
        cout << "--> Press 3 for *" << endl;
        cout << "--> Press 4 for /" << endl;
        cout << "--> Press 5 for %" << endl;
        cout << "--> Press 0 to Exit...!!!" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice==0){
            break;
        }
        else
        {
            switch (choice)
                {
                case 1:
                    cout << "Enter the first number: ";
                    cin >> fst;
                    cout << "Enter the second number: ";
                    cin >> snd;
                    sum(fst , snd);
    
                    break;
                case 2:
                    cout << "Enter the first number: ";
                    cin >> fst;
                    cout << "Enter the second number: ";
                    cin >> snd;
                    sub(fst , snd);
    
                    break;
                case 3:
                    cout << "Enter the first number: ";
                    cin >> fst;
                    cout << "Enter the second number: ";
                    cin >> snd;
                    mul(fst , snd);
    
                    break;
                case 4:
                    cout << "Enter the first number: ";
                    cin >> fst;
                    cout << "Enter the second number: ";
                    cin >> snd;
                    divi(fst , snd);
    
                    break;
                case 5:
                    cout << "Enter the first number: ";
                    cin >> fst;
                    cout << "Enter the second number: ";
                    cin >> snd;
                    mod(fst , snd);
    
                    break;
                default: cout << "Invalid Input...!!!!";
                    break;
                }
        }
        
    
    }
    


    return 0;
}