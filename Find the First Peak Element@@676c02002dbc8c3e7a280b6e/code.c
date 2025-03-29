#include<stdio.h>

int Array(int arr[],int n);

int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",Array(arr,n));
}

int Array(int arr[],int n){
    if(arr[0]==arr[n-1]){
        return -1;
        return 0;
    }if(!(arr[0]==arr[n-1])){
    for(int i=0;i<n;i++){
        if(arr[i+1]>arr[i] && arr[i+1]>arr[i+2]){
            return arr[i+1];
            return 0;
    }else if(arr[0]>arr[1]){
        return arr[0];
    }else if( arr[n-1]>arr[n-2]){
        return arr[n-1];
    }
    }       
}
}