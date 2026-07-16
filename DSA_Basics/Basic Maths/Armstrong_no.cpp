#include <bits/stdc++.h> 
using namespace std;

int count(int n){
    int sum=0;
    int dup=n;
    while(n>0){
        int ld = n%10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    if(sum == dup){
        cout << "This is the Armstrong Number ";
    }
    else{
        cout << "This is not the Armstrong Number ";
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << count(n) << endl;;
return 0;
}

// Time Complexicity => o(log10(n))