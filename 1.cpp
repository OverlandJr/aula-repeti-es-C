#include<stdio.h>
#include<locale.h>

 int main(){
setlocale(LC_ALL,"");

int x = 0, y = 0;

printf("Digite o valor de X e y:\n");
scanf("%d %d",&x, &y);

while(x!=y){
	if(x>y){
	printf("Decrescente!");
} else {
	printf("Crescente");
}
printf("\nDigite o valor de X e y:\n");
scanf("%d %d",&x, &y);

}
printf("Números iguais!");
}

