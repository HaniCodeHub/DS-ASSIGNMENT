#include<iostream>
using namespace std;

int main(){

    int arr[5] = {7,4,8,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    // Bubble sort
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout<<endl<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
