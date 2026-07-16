#include <bits/stdc++.h> 
using namespace std;

// parameterised solution
void f(int i, int sum){
    if(i < 1){
        cout << sum;
        return;
    }
    f(i-1, sum+i);
}

// functional approch
int f1(int n){
    if(n==0) return 0;
    return n + f1(n-1);
}

int main() {
    int n ;
    cout << "Enter the number : ";
    cin >> n;
    f(n, 0);
    cout << f1(n);
    return 0;
}