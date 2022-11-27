#include <stdio.h>
#include <conio.h>
#define satu_tahun 365
#define satu_bulan 30

main()
{ int x,t,b,h;
 clrscr();
 
 printf("Lama pengerjaan proyek = "); scanf("%d",&x);
 t= x / satu_tahun;
 b= (x % satu_tahun) / satu_bulan;
 h= (x % satu_tahun) % satu_bulan;
 
 printf("Proyek dikerjakan selama %d Tahun &d Bulan %d Hari",t,b,h);
 getch();
}
