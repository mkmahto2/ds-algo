1#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i, j, k;

    int n1 = m - l + 1; //size of L
    int n2 = r - m; //size of R

    /*Dividing the array into two sub array with 
    L and R names. L goes from l to m and R goes 
    from m+1 to r.*/
    int L[n1], R[n2];

    for(i = 0; i < n1 ; i++)
        L[i] = arr[l+i];
    for(j = 0; j < n2 ; j++)
        R[j] = arr[m+1+j];

    //Initializing i,j,k with 0,0 and l respectively.
    i = 0; // Initial index of L subarray
    j = 0; // Initial index of R subarray
    k = l; // 

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }   

    while (i < n1){
    arr[k] = L[i];
    i++;k++;
    }

    while (j < n2){
        arr[k] = R[j];
        j++;k++;
    }

}




void printArray(int arr[] , int size){
    for(int i = 0;  i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void mergeSort(int arr[], int l, int r){
    if (l<r){
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);    
    }
}


int main(){
    
    int n, x;
    cout<<"Enter the size for the integer-array"<<endl;
    cin >> n;
    
    int arr[n];
    cout<<"Enter the elements"<<endl;
    
    for( x = 0; x<n ; x++){
        cin>>arr[x];
    }
    
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array is :"<<endl;
    printArray(arr , arr_size);

    mergeSort(arr, 0, arr_size-1);

    cout<<"Sorted Array is: "<<endl;
    printArray(arr, arr_size);

    return 0;
}