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
            for(int i=2;i<=(a/2)+1;i++){
                if(a%i==0){
                    printf("Not Prime");
                    return 0;

                }
            }
            
    printf("Prime");
    }
    
}