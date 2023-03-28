#include<stdio.h>
#include<locale.h>

 int main(){
setlocale(LC_ALL,"");

int X = 0, Y = 4;

while(X<3){
	Y = Y + 2;
	X = X + 1;
}
printf("%d - %d", X, Y);
}
