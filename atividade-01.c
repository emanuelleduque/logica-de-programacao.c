/* Crie um programa que leia o nome, idade e cidade do usuário e exiba uma mensagem de apresentação formatada.

Leia o nome completo com espaço
Leia a idade como inteiro
Leia a cidade como string
Exiba: "Olá! Meu nome é [nome], tenho [idade] anos e sou de [cidade]."
*/ 

#include <stdio.h>

int main()
{
	char nome [50];
	int idade;
	char cidade[50];

	printf("Nome: ");
	scanf("%s", &nome);

	printf("Idade: ");
	scanf("%d", &idade);

	printf("Cidade: ");
	scanf("%s", &cidade);

	printf("Olá! Meu Nome é %s, Tenho %d anos e sou de %s!", nome, idade, cidade);
	

	return 0;
}
