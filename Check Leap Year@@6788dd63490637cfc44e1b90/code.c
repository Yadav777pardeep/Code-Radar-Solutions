#include<stdio.h>

int leap(int n);

int main(){
    int n;
    scanf("%d",&n);

    leap(n);

}

int leap(int n){
    if(n%400==0 && (n%4==0 || n%100!=0)){
        printf("Leap Year");
    }
}