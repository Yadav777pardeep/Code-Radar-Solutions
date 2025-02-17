#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n<=1){
        printf("Not Prime");
    }else if(n==2){
        printf("Prime");
    }else{
        for(int i=1;i=n/2+1;n++){
            if(n%i==0){
                printf("Not Prime");
            }else{
                break;
            }
        }
    printf("Prime");
    }
}