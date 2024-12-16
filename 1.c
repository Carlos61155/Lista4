#include <stdio.h>

int main(){
    int N;
    printf("Informe um numero de 1 a 1000: ");
    scanf("%d", &N);
    if(N>=1 && N<=1000){
        if(N%2==0){
        printf("0");
    }else{
        printf("1");
    }
    }else{
        printf("O numero informado nao esta entre 1 e 1000");
    }
    
    return 0;
}