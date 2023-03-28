#include<stdio.h>
#include<locale.h>

 int main(){
setlocale(LC_ALL,"");
int y, x = 0;

while(x<5){
	y = x * 3;
	x = x + 1;
}
printf("%d - %d", x, y);
}
