#include <bits/stdc++.h> 
using namespace std;

int count(int n){
    int revnum=0;
    int dup=n;
    while(n>0){
        int ld = n%10;
        revnum = (revnum*10)+ld;
        n = n/10;
    }
    if(revnum == dup){
        cout << "This is the Pallindrome";
    }
    else{
        cout << "This is not the Pallindrome";
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