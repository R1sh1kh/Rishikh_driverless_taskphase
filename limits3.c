#include <stdio.h>

int main() {
    int up, low;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &low, &up);
    int i, j;
    
    for (i = low; i <= up; i++) {
        int prime = 1;  // reset for each new number

        if (i < 2) {
            prime = 0;  // 0 and 1 are not prime
        } else {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime == 1) {
            printf("%d\t", i);
        }
    }

    return 0;
}


