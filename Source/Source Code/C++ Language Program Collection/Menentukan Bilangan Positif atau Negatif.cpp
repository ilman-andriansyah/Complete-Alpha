#include <stdio.h>
#include <conio.h>
main()
{
 clrscr();
 int angka;
 printf("Masukkan bilangan : ");scanf("%d",&angka);
 if(angka>=0){printf("%d adalah angka positif\n",angka);}
 else{printf("%d adalah angka negatif\n",angka);}
 getch();
}
