#include <iostream>
using namespace std;

int fun(int i, int n){
    if(i>n){
        return 1;
    cout << i;    
    fun(i+1,n);
    return 0;    
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    fun(1,n);
    return 0;
}