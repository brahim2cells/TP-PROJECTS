#include <stdio.h>

int main(){
    int i, T1[10], T2[10], S = 0;
    
    printf("** ARRAY 1 **\n"); 
    for (i = 0 ; i < 10 ; i++){
        printf("Ener an integer: ");
        scanf("%d", &T1[i]);
    }
    printf("-----------------\n");

    printf("** ARRAY 2 **\n"); 
    for (i = 0 ; i < 10 ; i++){
        printf("Ener an integer: ");
        scanf("%d", &T2[i]);
    }
    printf("-----------------\n");

    
    for (i = 0 ; i < 10 ; i++){
        if (T1[i] == T2[i]){
            S++;
        }
    }
    if (S == 10){
            printf("TRUE\n");
        }
        else{
            printf("FALSE\n");
        }

    return 0;
}