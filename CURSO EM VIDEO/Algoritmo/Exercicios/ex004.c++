/*
Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório 
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13.
*/

#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    // Solicita ao usuário que insira o primeiro número
    printf("Digite um valor: ");
    scanf("%d", &num1);
    
    // Solicita ao usuário que insira o segundo número
    printf("Digite outro valor: ");
    scanf("%d", &num2);
    
    // Calcula o somatório entre os dois números
    soma = num1 + num2;
    
    // Exibe o resultado
    printf("A soma entre %d e %d é igual a %d.\n", num1, num2, soma);
    
    return 0;
}
