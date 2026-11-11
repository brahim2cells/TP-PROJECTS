#include <stdio.h>

int main(){
    int i, j, N, T[N], dup, count;
    bool already_seen;

    printf("Enter N: ");
    scanf("%d", &N);    

    for (i = 0 ; i < N ; i++){
        printf("Enter an integer: ");
        scanf("%d", &T[i]);
    }
    
    count = 0;
    for (i = 0 ; i < N ; i++){
        already_seen = false;

        for (j = 0; j < i ; j++){
            if(T[i] == T[j]){
                already_seen = true;
                break;
            }
        }

        if (already_seen == false){
            dup = 0;
            for (j = 0 ; j < N ; j++){
               if(T[i] == T[j]){
                dup++;
                } 
            }
            if (dup >= 2){
            count++;
            } 
        };
    }

    printf("there is %d duplicate\n", count);
    
    return 0;
}