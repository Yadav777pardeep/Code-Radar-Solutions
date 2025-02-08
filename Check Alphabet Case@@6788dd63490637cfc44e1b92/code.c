#include <stdio.h>

int main(){
    char one;
    scanf("%c",&one);

    if(one>='a' && one<='z'){
        printf("Lowercase");
    }else if(one>='A'&& one<='Z'){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
}