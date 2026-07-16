#include <bits/stdc++.h> 
using namespace std;

// EUCLIDEAN ALGORITHM

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0)
    return b;
}

int main() {
    int a,b;
    cout << "Enter the number : ";
    cin >> a;
    cout << "Enter the number : ";
    cin >> b;
    cout << gcd(a,b) << endl;;
return 0;
}

// Time Complexicity => o(logfi(min(a,b)))