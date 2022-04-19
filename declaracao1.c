#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    int idade;
    double altura , salario;
    char nome[50];
    char sexo;

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    sexo = 'F';
    strcpy(nome, "Maria Silva");

    printf("IDADE = %d\n\n", idade);
    printf("SALÁRIO = %.2f\n\n", salario);
    printf("ALTURA = %.2f\n\n", altura);
    printf("SEXO = %c\n\n", sexo);
    printf("NOME = %s\n\n", nome);

    return 0;
}