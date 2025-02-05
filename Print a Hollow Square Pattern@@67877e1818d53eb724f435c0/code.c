#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int a=1;a<=n;a++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=n-2;j++){
            printf("*");
        }for(int k=1;k<=n-2;k++){
            printf(" ");
        }
    printf("\n");
    }
    for(int l=1;l<=n;l++){
        printf("*");
    }
}