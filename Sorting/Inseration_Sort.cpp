#include <bits/stdc++.h>
using namespace std;

// pushes the minimun value in front
void insertion_sort(int arr[],int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            cout << "\nRuns";
        }
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
    insertion_sort(arr,n);
    cout << "Sorted array is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexicity TC = O(n^2)

// Best TC = O(n^2)
// Average and Worst TC = O(n)