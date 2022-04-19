#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

    float salario1, salario2;
    char nome1[50], nome2[50];
    int idade1, idade2;
    char sexo1[50], sexo2[50];

int main(){
    
    printf("\n\nDigite o nome da primeira pessoa: ");
    scanf("%s", &nome1);
    printf("Salario da primeira pessoa: ");
    scanf("%f", &salario1);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);
    printf("Digite o sexo (F/M) da primeira pessoa: ");
    scanf("%s", &sexo1);

    printf("\n\nDigite o nome da segunda pessoa: ");
    scanf("%s", &nome2);
    printf("Salario da segunda pessoa: ");
    scanf("%f", &salario2);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);
    printf("Digite o sexo (F/M) da segunda pessoa: ");
    scanf("%s", &sexo2);


    printf("\n\n****************RELATORIO DE DADOS******************\n\n");
    printf("Nome 1: %s\n", nome1);
    printf("Salario 1: %.2f\n", salario1);
    printf("Idade 1: %d\n", idade1);
    printf("Sexo 1: %s\n\n", sexo1);

    printf("Nome 2: %s\n", nome2);
    printf("Salario 2: %.2f\n", salario2);
    printf("Idade 2: %d\n", idade2);
    printf("Sexo 2: %s\n", sexo2);

}