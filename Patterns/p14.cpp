#include <iostream>
using namespace std;

// A
// A B
// A B C
// A B C D
// A B C D E

void print14(int n){
    for(char i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout << ch <<" ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    print14(n);
    return 0;
}