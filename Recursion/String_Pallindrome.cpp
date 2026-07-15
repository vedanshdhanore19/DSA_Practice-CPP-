#include <bits/stdc++.h>
using namespace std;

bool fun(int i, string s){
    int n=s.size();
    if(i>=n/2)return true;
    if(s[i] != s[n-i-1]) return false;
    return fun(i+1,s);
}

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << fun(0,s);
    return 0;
}