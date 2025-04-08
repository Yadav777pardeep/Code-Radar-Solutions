#include<stdio.h>

int Array(int arr[],int n){
    int j;
    scanf("%d",&j);

    for(int i=0;i<n;i++){
        if(arr[i]==j){
            printf("%d",i);
            return 0;
        }
    }

        printf("-1");

}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }

    Array(arr,n);
}