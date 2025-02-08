#include <stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a<=1){
        printf("Not Prime");
    }else if(a==2){
        printf("Prime");
    }else{
            for(int i=2;i=sqrt(a);i++){
                if(a%i==0){
                    printf("Not Prime");
                }
            }
            

    }
    printf("Prime");
}