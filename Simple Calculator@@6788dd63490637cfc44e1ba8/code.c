#include <stdio.h>

int main(){
    int a,b,;
    char d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&d)
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