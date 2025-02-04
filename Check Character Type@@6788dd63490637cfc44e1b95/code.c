#include <stdio.h>
#include<ctype.h>

int main(){
    char one;
    scanf("%c",&one);

    if(isdigit(one)){
        printf("Digit");
    }else if(isalpha(one)){
        if(one=='a'||one=='e'||one=='i'||one=='o'||one=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
    }
}
}