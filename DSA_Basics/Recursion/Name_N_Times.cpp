#include <iostream>
using namespace std;

void fun(int i, int n){
    if(i>n){
        return;
    cout << "Vedansh";    
    fun(i+1,n);
    return;    
    }
}

int main() {
    int i,n;
    cin >> i >> n;
    fun(i,n);
    return 0;
}