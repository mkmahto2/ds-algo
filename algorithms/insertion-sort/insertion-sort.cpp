#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    int i, key, j;
    for(j = 1; j < n ; j++){
        key = arr[j];
        i = j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    } 
}

void print_arr(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = { 9,6,5,0,8,2,7,1 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    insertion_sort(arr, n);
    print_arr(arr, n);

    return 0;
}
