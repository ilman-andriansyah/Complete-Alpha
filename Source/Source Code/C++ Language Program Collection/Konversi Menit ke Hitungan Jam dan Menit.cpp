#include <stdio.h>
#include <conio.h>
main()
{ int m,jam,menit;
 clrscr();
 printf("Masukkan menit : "); scanf("%d",&m);

 jam= (float)m / 60;
 menit= m % jam;

 printf(" %d Jam %d menit",jam,menit);

 getch();
}
