#include <iostream>
using namespace std;

//     * 
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     * 

    
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

void print8(int n){
    for(int i=1; i<=n; i++){
        for(int j=2; j<=i; j++){
            cout << " " ;
        }
        for(int l=1; l<=2*n-(2*i-1); l++){
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
    print8(n);
    return 0;
}