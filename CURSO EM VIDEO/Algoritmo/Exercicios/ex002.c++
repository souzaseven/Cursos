/*Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas vindas para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!*/

#include <stdio.h>

int main() {
    char nome[100]; // Declaração de um array de caracteres para armazenar o nome
    printf("Qual é o seu nome? ");
    scanf("%[^\n]", nome); // Lê o nome fornecido pelo usuário até que uma nova linha seja encontrada
    printf("Olá %s, é um prazer te conhecer!\n", nome);
    return 0;
}
