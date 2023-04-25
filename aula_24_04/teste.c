#include <stdio.h>
#include <ctype.h>

int main(){

char nome[100];
int alterar = 12;

printf("informe um nome:");
scanf("%[^\n]s",&nome[100]);

strcpy(nome,"arrr");

printf("DADO: %s",nome);


    return 0;
}