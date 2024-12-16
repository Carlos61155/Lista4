#include <stdio.h>

int main(){
    int A, B, M;
    printf("Informe a nota lembrada: ");
    scanf("%d", &A);
    printf("Informe a media lembrada: ");
    scanf("%d", &M);
    B = (M*2)-A;
    if((B>=0 && B<=100) && (A>=0 && A<=100)){
        printf("A outra nota foi: %d", B);
    }else{
        printf("Informe valores validos");
    }
    return 0;
}