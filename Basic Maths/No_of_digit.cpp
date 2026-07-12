#include <bits/stdc++.h> 
using namespace std;

// method one
int count1(int n){
    int cnt=0;
    while(n>0){
        cnt = cnt +1;
        n = n/10;
    }
    return cnt;
}

// method two
int count2(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << count1(n) << endl;;
    cout << count2(n);
return 0;
}

// Time Complexicity => o(log10(n))