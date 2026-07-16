#include <iostream>
using namespace std;

//     * 
//    ***
//   *****
//  *******
// *********

void print7(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << " ";
        }
        for (int k=1; k<=2*i-1; k++){
            cout << "*";
        }
        cout << endl;
    }  
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    print7(n);
    return 0;
}