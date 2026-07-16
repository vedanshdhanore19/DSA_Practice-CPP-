#include <iostream>
using namespace std;

// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15

void print13(int n){
    int start=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << start << " ";
            start+=1;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    print13(n);
    return 0;
}