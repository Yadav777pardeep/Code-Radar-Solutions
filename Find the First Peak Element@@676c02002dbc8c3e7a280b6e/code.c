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
    for(int i=0;i<n;i++){
        if(arr[i+1]>arr[i] && arr[i+1]<arr[i+2]){
            return arr[i+1];
            return 0;
        }
        
    } printf("-1");
}