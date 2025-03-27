#include<stdio.h>

void array(int arr[],int n);
void printNum(int arr[],int n);

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    array(arr,n);
    printNum(arr,n);
}

void array(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]>arr[j+1]){
            int temp=arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    }
}

void printNum(int arr[],int n){
    for(int i=0;i<=n;i++){
        if(i==n-1){
            printf("%d",arr[i]);
        }
    }
}