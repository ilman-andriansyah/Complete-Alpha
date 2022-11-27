#include <stdio.h>
#include <conio.h>
main()
{ int hari,t,m,h;
 clrscr();
 printf("Masukkan Banyak Hari = "); scanf("%d",&hari);

 t= hari/365;
 m= (hari % 365) / 7;
 h= (hari % 365) % 7;
 
printf("Tahun 	: %d\n",t);
printf("Minggu	: %d\n",m);
printf("Hari 	: %d\n",h);
getch();
}
