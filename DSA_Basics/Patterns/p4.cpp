#include <iostream>
using namespace std;

// 1
// 22
// 333
// 4444
// 55555

void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    print4(n);
    return 0;
}