#include <stdio.h>

int main(){
    int A, B;
    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &A, &B);
    if(A>=B){
        if(B*1==A || B*2==A || B*3==A || B*4==A || B*5==A || B*6==A || B*7==A || B*8==A || B*9==A || B*10==A){
            printf("Sao multiplos");
        }else{
            printf("Nao sao multiplos");
        }
    }else{
        if(A*1==B || A*2==B || A*3==B || A*4==B || A*5==B || A*6==B || A*7==B || A*8==B || A*9==B || A*10==B){
            printf("Sao multiplos");
        }else{
            printf("Nao sao multiplos");
        }
    }

    return 0;
}