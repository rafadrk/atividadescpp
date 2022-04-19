#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    int idade = 20;
    double altura = 1.63;
    char nome [12] = "Maria Silva";
    char sexo [9] = "feminino";
    double salario = 5800.50;

    printf("IDADE = %d\n\n", idade);
    printf("SALÁRIO = %.2f\n\n", salario);
    printf("ALTURA = %.2f\n\n", altura);
    printf("SEXO = %s\n\n", sexo);
    printf("NOME = %s\n\n", nome);
}