#include <stdio.h>

int main(){

    int i, j, N = 17, even, primes[N];
    bool prime = true;
    

    for (i=2; i <= N ; i++){
        if (N % i == 0){
            prime = false;
        }
    }
    printf("result \n");
    printf("%d\n", prime);

    return 0;
}

//    for (i=2; i <= N ; i++){
        
//    }