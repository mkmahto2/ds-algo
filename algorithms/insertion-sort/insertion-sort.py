def insertionSort(arr): 
    """
    Insertion Sorting Algorithm in its iterative version.
    """
    for i in range(1, len(arr)): 
        key = arr[i] 
        j = i-1
        while j >= 0 and key < arr[j] : 
                arr[j + 1] = arr[j] 
                j -= 1
        arr[j + 1] = key 
  
  
 
if __name__ == "__main__":
    arr = [9,6,5,0,8,2,7,1] 
    insertionSort(arr) 
    for i in range(len(arr)): 
        print ("% d" % arr[i]) 