int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int SmallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[SmallestIdx]){
                int temp=arr[j];
                arr[j] = arr[SmallestIdx];
                arr[SmallestIdx] = temp;
            }
        }
    }
}

int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
