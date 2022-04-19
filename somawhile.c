#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    int numero;
    int n = 0;
    int numeroescolhido;

    printf("Quantos numeros serao digitados: ");
    scanf("%d", numeroescolhido);

    while (numero = numeroescolhido){
        printf("Digite os numeros: ");
        scanf("%d", &numero);
        n = numero + n;
    }

    printf("A soma dos números é: %d", n);

}
