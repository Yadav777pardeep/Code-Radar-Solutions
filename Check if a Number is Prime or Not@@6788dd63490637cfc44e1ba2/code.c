#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if(n<=1){
        printf("Not Prime");
    }else if(n==2){
        printf("Prime");
    }else{
        for(int i=;i=(n/2)+1;i++){
            if(n%i!=0){
                printf(" Prime");
                break;
            }else{
            }
        }
    printf("Prime");
    }
}