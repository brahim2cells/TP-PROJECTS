#include <stdio.h>
#include <string.h>

int main(){

    int i = 0, j=0, k=0, sum=0, N=0, count = 0;
    bool prime;
    char text[1000],str_j[1000];

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 2; i <= N ; i++){
        
        sum = 0;
        text[0] = '\0';

        for (j=i; j <= N ; j++){

            prime = true;

            for (k=2; k < j; k++ ){
                if (j % k == 0){
                    prime = false;
                }
            }
            if (prime == 0 && j == i){
                break;
            }
            else if (prime == 1){
                sprintf(str_j, "%d", j);
                sum += j;
                if (text[0] == '\0'){
                    strcpy(text, str_j);
                }
                else{
                    strcat(text, "+");
                    strcat(text, str_j);
                }
                if (sum == N){
                    if (j != i){
                        printf("%s = %d\n",text,N);
                        count ++;
                        break;
                    }
                    
                }
                else if(sum > N){
                    break;
                }
                }
            
            
        }
    }
    printf("total representatives: %d\n", count);
    return 0;
}