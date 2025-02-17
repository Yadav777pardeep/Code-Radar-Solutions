#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime");
    } else if (n == 2) {
        printf("Prime");
    } else {
        for (int i = 2; i <= n / 2; i++) { // Loop starts from 2 to n/2
            if (n % i == 0) {
                printf("Not Prime");
                return 0; // Exit the program immediately after finding a divisor
            }
        }
        printf("Prime"); // If no divisors are found, it's prime
    }

    return 0;
}
