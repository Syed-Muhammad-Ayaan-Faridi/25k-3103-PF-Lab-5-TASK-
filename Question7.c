#include <stdio.h>

int main(void){
    int permission;
    const int READ = 1,WRITE = 2, EXECUTE = 4;


    printf("Give Permission to Read(1) Write(2) Execute(4): ");
    scanf("%d",&permission);

    if (permission & EXECUTE){
        printf("Access granted: full control");
    }
    else if ((permission & READ) && (permission & WRITE) && (permission & (~EXECUTE))){
        printf("Access granted: Read and Write only");
    }
    else if (permission & READ){
        printf("Access granted: Read only");
    }
    else{
        printf("Access Denied");
    }
    return 0;
}