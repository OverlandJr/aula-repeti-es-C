#include<stdio.h>
#include<locale.h>

 int main(){
setlocale(LC_ALL,"");

int senha;

printf("Digite a senha:\n");
scanf("%d",&senha);

while(senha != 2022){
	printf("Senha incorreta");
	printf("Digite a senha novamente:\n");
}
printf("Acesso autorizado");
}
