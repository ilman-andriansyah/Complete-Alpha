#include <stdio.h>
#include <conio.h>
main()
{ int j,l; float rata_rata;
 clrscr();
 printf("***MENGHITUNG KONSUMSI RATA-RATA SEPEDA***\n");
 printf("Masukkan total jarak dalam km : "); scanf("%d",&j);
 printf("Masukkan total bahan bakar yang dihabiskan dalam liter: ");
 scanf("%d",&l);

 rata_rata=(float)j/l;

 printf("Konsumsi rata-rata (km / lt) %.3f",rata_rata);
 getch();
}
