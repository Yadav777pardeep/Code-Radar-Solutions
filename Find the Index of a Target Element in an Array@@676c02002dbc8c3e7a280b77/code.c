#include<stdio.h>

int Array(int arr[],int n){
    int j;
    scanf("%d",&j);
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==j){
            printf("%d",i);
            k=1;
            return 0;
        }
    }
        if(k==0){
            printf("-1");
        }
        

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