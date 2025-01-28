#include <stdio.h>

int main(){
    char name[20];
    scanf("%s",&name);

    int age;
    scanf("%d",&age);

    char hobby[50];
    scanf("%s",&hobby);

    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);

    return 0;
}