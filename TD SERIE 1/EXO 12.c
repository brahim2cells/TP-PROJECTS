// ZOUAIDI Elhadj Brahim
// EXO 12

#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of lines: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        
        for (int j = 1; j <= N - i; j++){
            printf(" ");
        }

        for (int x = 1; x <= 2*i - 1; x++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}