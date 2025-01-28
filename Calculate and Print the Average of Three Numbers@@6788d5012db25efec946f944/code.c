#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int average;
    average = (a+b+c)/3;

    printf("Average: %0.2lf",(float)average);
    return 0;
}