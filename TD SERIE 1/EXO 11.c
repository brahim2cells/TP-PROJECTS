// ZOUAIDI Elhadj Brahim
// EXO 11

#include <stdio.h>

int main(){

    int M,N,R;

    printf("Enter the first integer: ");
    scanf("%d", &M);
    printf("Enter the second integer: ");
    scanf("%d", &N);

    if (M < 0 || N < 0) {
        printf("Please enter non-negative integers.\n");
        return 1;
    }

    if (M == 0 && N == 0) {
        printf("GCD(0,0) is undefined.\n");
        return 1;
    }

    int A = M;
    int B = N;

    while (N != 0) {
        R = M % N;
        M = N;
        N = R;
    }

    printf("GCD(%d,%d) = %d\n", A, B, M);
    
    return 0;
}