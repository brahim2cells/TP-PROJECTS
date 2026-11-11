#include <stdio.h>

int main(){

    int i, j, diag1[5] , diag2[5] ,T[5][5] = {{6,2,3,5,6},{4,6,2,6,1},{1,3,6,7,9},{1,6,3,6,8},{6,0,1,4,6}};

    // display array
    printf("THE ARRAY: \n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // display even lines
    printf("EVEN LINES: \n");
    for (i = 0; i < 5; i = i + 2){
        for (j = 0; j < 5; j++){
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }    
    printf("\n");
    
    // ODD ROWS
    printf("ODD ROWS: \n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (j % 2 != 0){
                printf("%d ", T[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    // DIAGONAL R -> L
    printf("DIAGONAL R -> L: \n");
    for (i = 0; i < 5; i++){
        diag1[i] = T[i][i];
        printf("%d ", T[i][i]);
    }
    printf("\n");
    printf("\n");

    // DIAGONAL L -> R
    printf("DIAGONAL L -> R: \n");
    for (i = 4; i >= 0; i--){
        j = 4-i;
        diag2[i] = T[j][i];
        printf("%d ", T[j][i]);
    }
    printf("\n");
    printf("\n");

    // check diagonal
    printf("check diagonal: \n");
    bool equal = true;
    for (i = 4; i >= 0; i--){
        if (diag1[i] != diag2[i]){
            equal = false;
        }
    }
    if (equal){
        printf("YES");
    }
    else{
        printf("NO");
    }
    printf("\n");

    return 0;
}