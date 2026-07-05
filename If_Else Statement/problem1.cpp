#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    if(marks < 25){
        cout << "Your grade is F" << endl; 
    }
    else if(marks <= 44){
        cout << "Your grade is E" << endl; 
    }
    else if(marks <= 49){
        cout << "Your grade is D" << endl; 
    }
    else if(marks <= 59){
        cout << "Your grade is C" << endl; 
    }
    else if(marks <= 79){
        cout << "Your grade is B" << endl; 
    }
    else if(marks > 79){
        cout << "Your grade is A" << endl; 
    }
    return 0;
}