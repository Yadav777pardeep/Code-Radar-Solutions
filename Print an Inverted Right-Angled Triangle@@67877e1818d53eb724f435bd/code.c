#include<stdio.h>

int main(){
    int row;
    scanf("%d",&row);

    int i = row;
    while(i>0){
        for(int i=row;i>0;i--){
            printf("*");
        }   printf("\n");
        i-=1;
    }  

    return 0;
}