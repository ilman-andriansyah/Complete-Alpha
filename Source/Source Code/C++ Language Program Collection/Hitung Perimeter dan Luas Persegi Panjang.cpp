#include <stdio.h>
#include <conio.h>
main()
{ int p,l,kl,luas;
 clrscr();
 printf("Masukkan panjang persegi = "); scanf("%d",&p);
 printf("Masukkan lebar persegi   = "); scanf ("%d",&l);
 kl= 2*(p+l);
 luas= p*l;
 printf("Perimeter persegi panjang = %d inchi\n",kl);
 printf("Luas persegi panjang      = %d inchi",luas);
 getch();
}
