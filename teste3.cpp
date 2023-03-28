#include<stdio.h>
#include<locale.h>

 int main(){
setlocale(LC_ALL,"");

int x = 2, y = 0;

while(x>60){
	x = x * 2;
	y =y + 10;
}
printf("%d - %d", x, y);
}
