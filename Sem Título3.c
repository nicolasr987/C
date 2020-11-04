//Bibliotecas
#include <stdio.h> //entrada e saida de dados
#include <stdlib.h> //comandos padrões
#include <conio.h> //entrada e saida de dados de dispositivos de entrada e saida
#include <string.h>// texto

//programa principal
void main()
{

int idade;
char sexo;
float salario;
char nome [60];

printf("Qual a  sua idade?");
scanf("%d", & idade);

printf("Qual seu sexo?");
scanf("%c", & sexo);

printf("Qual seu salario?");
scanf("%F", & salario);

printf("qual seu nome");
gets(nome);
//mostrar dados na tela


}


