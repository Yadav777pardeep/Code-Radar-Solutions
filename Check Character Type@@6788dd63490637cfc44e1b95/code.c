#include <stdio.h>
#include<ctype.h>

int main(){
    char one;
    scanf("%c",&one);

    if(isdigit(one)){
        printf("Digit");
    }else(isalpha(one)){
        if(one>=a || one<=e){
            printf("Vowel");
        }else{
            printf("Consonant")
        }
    }
}