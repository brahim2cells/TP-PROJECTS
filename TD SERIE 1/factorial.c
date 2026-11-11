#include <stdio.h>

int factorial(int N);

int main (){
    int N;
    printf("enter here: ");
    scanf("%d", &N);
    int K = N;
    printf("%d! = %d\n", K,factorial(N));
    return 0;
}

int factorial(int N){
    int S = 1;
    for (N ; N >= 1; N--){
        S = S * N;
    }
    return S;
}