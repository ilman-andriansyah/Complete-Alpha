#include <stdio.h>
#include <conio.h>
main()
{ int b1,j1,b2,j2; float js,rata_rata;
 clrscr();
 printf("***MENGHITUNG NILAI RATA-RATA ITEM***\n");
 printf("Masukkan berat item 1 = "); scanf("%d",&b1);
 printf("Masukkan jumlah butir item 1 = "); scanf("%d",&j1);
 printf("Masukkan berat item 2 = "); scanf("%d",&b2);
 printf("Masukkan jumlah butir item 2 = "); scanf("%d",&j2);

 js=(b1*j1)+(b2*j2);
 rata_rata=(float)js/(j1+j2);

 printf("Nilai Rata-rata = %f",rata_rata);
 getch();
}
