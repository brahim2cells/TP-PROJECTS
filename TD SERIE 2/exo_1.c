#include <stdio.h>

int main(){
    int i, N, T[10], occur = 0;
    
    for (i = 0 ; i < 10 ; i++){
        printf("Ener an integer: ");
        scanf("%d", &T[i]);
    }

    printf("Enter N: ");
    scanf("%d", &N);
    
    for (i = 0 ; i < 10 ; i++){
        if (T[i] == N){
            occur++;
        }
    }
    printf("The number %d is repeated %d times in the array\n", N,occur);

    return 0;
}