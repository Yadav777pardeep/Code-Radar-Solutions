#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=n;j>=n-1;j--){
            printf(" ");
        }for(int k=1;k<=2*i-1){
            printf("*");
        }
printf("\n");
    }
}