/*
 Crie um programa que leia o nome e o salário de um funcionário, mostrando no 
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
*/

#include <stdio.h>

int main() {
    char nome[100]; // Declaração de um array de caracteres para armazenar o nome
    float salario; // Variável para armazenar o salário
    
    // Solicita ao usuário que insira o nome do funcionário
    printf("Nome do Funcionário: ");
    scanf("%[^\n]", nome); // Lê o nome fornecido pelo usuário até que uma nova linha seja encontrada
    
    // Limpa o buffer do teclado para evitar problemas de leitura
    while (getchar() != '\n');

    // Solicita ao usuário que insira o salário do funcionário
    printf("Salário: ");
    scanf("%f", &salario); // Lê o salário fornecido pelo usuário
    
    // Exibe a mensagem com base nas informações fornecidas
    printf("O funcionário %s tem um salário de R$%.2f em Junho.\n", nome, salario);
    
    return 0;
}
