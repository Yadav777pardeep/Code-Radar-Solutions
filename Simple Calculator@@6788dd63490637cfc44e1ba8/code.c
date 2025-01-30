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
        printf("%d",a+b);
    }else if(c==e){
        printf("%d",a-b);
    }else if(c==f){
        printf("%d",a*b);
    }else if(c==g){
        if(b==0){
            printf("error");
        }else{
            printf("%d",a/b);
        }
    }else{
        printf("error");
    }
}