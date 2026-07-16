#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n<=1) return n;
    int ld = fun(n-1);
    int sld = fun(n-2);
    return ld + sld;
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << fun(n);
    return 0;
}