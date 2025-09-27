#include <stdio.h>
int main(void){
    int age;

    printf("Input your age: ");
    scanf("%d",&age);

    if (age<5){
        printf("Free\n");
    }
    else if (age > 65){
        printf("Discount\n");
    }
    else{
        printf("Standard\n");
    }

    return 0;
}