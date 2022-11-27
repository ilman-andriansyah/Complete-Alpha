#include <stdio.h>
#include <conio.h>
#define sl 18
#define h 6700
main()
{ int jr; float liter,t_biaya;
 clrscr();
 printf("Jarak Bandung Ke Jakarta = "); scanf("%d",&jr);

 liter=(float)jr/sl;
 t_biaya=liter*h;

 printf("Bensin yang dihabiskan   = %.2f Liter\n ",liter);
 printf("Total biaya yang dibutuhkan = Rp. %.2f",t_biaya);
 getch();
}
