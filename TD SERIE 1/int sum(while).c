#include <stdio.h>

int main() {
    int Sum, N, cyc;

    cyc = 1;
    Sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    while (cyc <= N) {
        Sum += cyc;
        cyc += 1;
    }

    printf("The sum is: %d", Sum);

    return 0;
}