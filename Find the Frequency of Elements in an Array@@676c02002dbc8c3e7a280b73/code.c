#include<stdio.h>

int Array(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[0]==arr[i+1]){
            count+=1;
            printf("%d %d",arr[i+1],count);
            count=0;
        }
    }

}

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

