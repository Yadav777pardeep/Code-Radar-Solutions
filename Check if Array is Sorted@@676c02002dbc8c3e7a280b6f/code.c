#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            k=1;
            break;
        }
    }
    printf("Sorted");



    return 0;
}