#include <stdio.h>

int main(){
    float salario, imposto, salario008, salario018;
    printf("Informe o salario: ");
    scanf("%f", &salario);

    if(salario>=0.00 && salario<=2000.00){
        printf("Isento");
    }else if(salario>=2000.01 && salario <=3000.00){
        salario = salario-2000.00;
        imposto = salario*0.08;
        printf("Imposto: R$ %.2f", imposto);
    }else if(salario>=3000.01 && salario<=4500.00){
        salario = salario-2000.00;
        salario008 = 1000*0.08;
        salario = salario-1000.00;
        imposto = (salario*0.18)+salario008;
        printf("Imposto: R$ %.2f", imposto);
    }else{
        salario = salario-2000.00;
        salario008 = 1000*0.08;
        salario =  salario-1000;
        salario018 = 1500*0.18;
        salario = salario-1500;
        imposto = (salario*0.28)+salario008+salario018;
        printf("Imposto: R$ %.2f", imposto);
    }

    return 0;
}