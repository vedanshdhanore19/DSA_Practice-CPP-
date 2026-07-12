#include <bits/stdc++.h> 
using namespace std;

// Method one
int count1(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cnt++;
        }
    }
    if(cnt==2) cout << "Prime Number";
    else cout << "Not Prime Number";
    return 0;
    // Time Complexicity => o(n)
}

// Method two
int count2(int n){
    int cnt=0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            cnt++;
            if(n/i != 0){
                cnt++;
            }
        }
    }
     if(cnt==2) cout << "Prime Number";
    else cout << "Not Prime Number";
    return 0;
    // Time Complexicity => o(sqrt(n))

}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    // cout << count(n) << endl;
    count1(n);
    count2(n);
return 0;
}
