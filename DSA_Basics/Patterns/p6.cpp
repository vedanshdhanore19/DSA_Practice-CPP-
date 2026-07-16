#include <iostream>
using namespace std;

// 12345
// 1234
// 123
// 12
// 1

void print6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    print6(n);
    return 0;
}