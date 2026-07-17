#include <bits/stdc++.h>
using namespace std;

// pushes the minimun value in front
void selection_sort(int arr[],int n){
    for(int i=0; i<=n-2; i++){
        int mini=i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }   
}

int main(){
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int arr[n]={};
    for(int i=0; i<n; i++){
        cout << "Enter the number : " ;
        cin >> arr[i];
    }
    selection_sort(arr,n);
    cout << "Sorted array is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Best Worst Average Time Complexicity TC = O(n^2)