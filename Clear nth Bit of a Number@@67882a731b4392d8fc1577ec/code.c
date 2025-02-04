#include <stdio.h>

int main(){
    int a,b,c;

    scanf("%d %d",&a,&b);

    c = c & ~(1<<b);

    printf("%d",c);
return 0;
}
