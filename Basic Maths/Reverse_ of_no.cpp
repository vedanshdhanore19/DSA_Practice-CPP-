#include <bits/stdc++.h> 
using namespace std;

int count(int n){
    int revnum=0;
    while(n>0){
        int ld = n%10;
        revnum = (revnum*10)+ld;
        n = n/10;
    }
    return revnum;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << count(n) << endl;;
return 0;
}

// Time Complexicity => o(log10(n))