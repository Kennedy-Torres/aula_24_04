#include <stdio.h>

int main(){

char nome[100];
int i,j;

printf("Informe o seu nome: ");
scanf("%[^\n]s",&nome);

printf("------------HORIZONTAL------------\n");
printf("%s\n",nome);

for(i=strlen(nome)-1;i>-1;i--){
    printf("%c", nome[i]);
}
printf("----------------------------------\n");


printf("-------------VERTICAL-------------\n");
for(i=0,j=strlen(nome)-1;j>-1;i++,j--){
    printf("%c\t%c\n",nome[i],nome[j]);
}
printf("----------------------------------\n");


    return 0;
}




// ao invés de varrer todo o vetor ele ira percorrer apenas a qtd necessária
// strlen(variavel)        .... sempre retorna um valor inteiro , apenas a qtd necessária