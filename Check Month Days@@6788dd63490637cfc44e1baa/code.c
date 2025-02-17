#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    int one = 31;
    int two = 28;
    int three = 30;

    if(a==1 ||a==3||a==5||a==7||a==8||a==10||a==12){
        printf("%d",one);
    }else if(a==2){
        printf("%d",two);
    }else if(a>12){
        printf("Invalid month");
    }
    
    else{
        printf("%d",three);
    }
}