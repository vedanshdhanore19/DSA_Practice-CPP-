#include <bits/stdc++.h>
using namespace std;

// pushes the maximun value at back
void bubble_sort(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        // If array is already in sorted then TC is O(n)
        int didswap=0;                 
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap == 0) break;
        cout << "\nRuns";
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
    bubble_sort(arr,n);
    cout << "Sorted array is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexicity TC = O(n^2)

// Best TC = O(n^2)
// Average and Worst TC = O(n)