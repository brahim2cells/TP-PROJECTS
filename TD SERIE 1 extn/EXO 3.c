#include <stdio.h>

int main(){
    int N,even,odd,max,len;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    int NN = N;
    max = 0;

    if ( N <= 0 ){
        printf("Please enter a positive integer!\n");
        return 1;
    }
    while ( N != 1){
        len++;
        printf("%d)- ",len);
            if (N % 2 == 0){
                N /= 2;
                even = N;
                printf("%d / 2 = %d\n",NN,even);
                NN = N;
            }
            else {
                N = 3*N+1;
                odd = N;
                printf("3*%d + 1 = %d\n",NN,odd);
                NN = N;
            }
            
            if (even > max){
                max = even;
            }
            if (odd > max){
                max = odd;
            }
    }
    printf("the lenghts is : %d\n", len);
    printf("the maximum value reached is : %d \n",max);

    return 0;
}