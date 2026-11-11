#include <stdio.h>

int main(){
    int i, j, N, T[N], min, k;

    printf("Enter N: ");
    scanf("%d", &N);    

    for (i = 0 ; i < N ; i++){
        printf("Enter an integer: ");
        scanf("%d", &T[i]);
    }
    
    printf("The array: ");
    for (i = 0 ; i < N ; i++){
        printf("%d ", T[i]);
    }

    for (i = 0 ; i < N ; i++){
        j = i;
        min = T[i];
        for (j ; j < N ; j++){
            if (T[j] <= min){
                min = T[j];
                k = j;
            }
        }
    if (T[i] != min){
        T[k] = T[i];
        T[i] = min;
    }
    }

    printf("\nThe sorted array: ");
    for (i = 0 ; i < N ; i++){
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}