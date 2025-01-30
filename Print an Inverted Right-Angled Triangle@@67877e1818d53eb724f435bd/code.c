#include<stdio.h>

int main(){
    int row;
    scanf("%d",&row);

    int i = row;
    while(row>0){
        for(int i=row;i>0;i--){
            printf("* ");
        }   printf("\n");
        row--;
    }  

    return 0;
}