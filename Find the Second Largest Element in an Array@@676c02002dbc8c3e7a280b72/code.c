int array(int arr[],int n);

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    array(arr[],n);
    printNum(arr,n);
}

int array(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int temp=arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

int printNum(int arr[],int n){
    printf("%d",arr[n-2]);
}