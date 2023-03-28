#include<stdio.h>
#include<locale.h>

 int main(){
setlocale(LC_ALL,"");

int x = 5, y = 0;

while(x>2){
	x = y + x;
	y = x - 1;	
}
printf("%d - %d", x, y);
}

