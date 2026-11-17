#include <stdio.h>

struct student {
    char name[50];
    int age;
    float marks;
};

int main(){
    float sum = 0, average;

    printf("The number of students is 2\n");
    int N = 2;
    struct student T[N];

    for (int i = 0; i < N; i++ ){
        printf("Enter your name: ");
        scanf("%49s", &T[i].name);

        printf("Enter your age: ");
        scanf("%d", &T[i].age);

        printf("Enter your total: ");
        scanf("%f", &T[i].marks);
    }

    for (int i = 0; i < N; i++){
        printf("student %02d: %s - ",i+1, T[i].name);
        printf("age: %d - ", T[i].age);
        printf("total marks: %.2f\n", T[i].marks);
    }

    for (int i = 0; i < N; i++){
        sum += T[i].marks;
    }

    average = sum / N ;
    printf("The average mark of students is: %.2f\n", average);
    return 0;
}