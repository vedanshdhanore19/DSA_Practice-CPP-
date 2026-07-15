#include <bits/stdc++.h>
using namespace std;
// Two Pointer Approch
void fun(int a[], int l, int r){
    if(l >= r) return;          // base case: pointers crossed, stop
    swap(a[l], a[r]);           // swap outer elements
    fun(a, l+1, r-1);           // move both pointers inward
}
// One Pointer Approch
void fun1(int a[],int i, int n){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    fun1(a,i+1,n);
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    fun(arr, 0, n-1);
    fun1(arr,0,n);

    cout << "Reversed array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}