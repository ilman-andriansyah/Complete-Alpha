#include <stdio.h>
#include <conio.h>
 
int main()
{
clrscr();
    	int angka;
	printf("Masukan Angka : ");scanf("%d",&angka);
    	if(angka%2==0){printf("%d adalah bilangan genap \n",angka);} 
	else{printf("%d adalah bilangan ganjil \n",angka);}
    	getch();
}
