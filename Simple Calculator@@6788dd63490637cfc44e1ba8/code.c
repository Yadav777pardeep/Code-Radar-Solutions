#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    char c;
    scanf("%c",&c);

    char d,e,f,g;
    d='+';
    e='-';
    f='*';
    g='/';

    if(c==d){
        printf("%f",a+b);
    }else if(c==e){
        printf("%f",a-b);
    }else if(c==f){
        printf("%f",a*b);
    }else if(c==g){
        printf("%f",a/b);
    }else{
        printf("error");
    }
}