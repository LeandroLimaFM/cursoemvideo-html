#include <stdio.h>

int main()
{
    printf("Hello, World!");
    char nome[50];
    printf("\nQual seu nome? ");
    scanf("%s", &nome);
    printf("Que belo nome, %s", nome);
}