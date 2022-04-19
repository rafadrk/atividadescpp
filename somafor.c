#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    int numero;
    int escolhenumero;
    int n = 0;

    printf("Quantos numeros serao digitados?");
    scanf("%d", &escolhenumero);

    for(int i = 1; i <= escolhenumero; i++){
        printf("\n\nDigite um numero: ");
        scanf("%d", &numero);

        n = n + numero;
    }
        printf("\n\nSOMA = %d", n);
}