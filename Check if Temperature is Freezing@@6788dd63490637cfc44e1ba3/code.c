#include <stdio.h>

int main(){
    int F;
    scanf("%d,&F");

    if(F<=0){
        printf("Freezing");
    }else if(F>0){
        printf("Above Freezing");
    }
}