#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    char c;
    scanf("%c",&c);

    if(c=='+'){
        printf("%f",a+b);
    }else if(c=='-'){
        printf("%f",a-b);
    }else if(c=='*'){
        printf("%f",a*b);
    }else if(c=='/'){
        printf("%f",a/b);
    }else{
        printf("error");
    }
}