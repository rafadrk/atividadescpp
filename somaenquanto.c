#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    int numero;
    int n = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero);

    while (numero != 0){
        n = numero + n;
        printf("Digite os numeros: ");
        scanf("%d", &numero);
    }

    if(numero == 0){
            printf("A soma dos números é: %d", n);
    }
}