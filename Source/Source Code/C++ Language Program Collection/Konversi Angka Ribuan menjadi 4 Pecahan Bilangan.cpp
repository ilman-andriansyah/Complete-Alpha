#include <stdio.h>
#include <conio.h>
main()
{ int a,rb,rt,pul,sat;
 clrscr();
 printf("Masukkan Angka dalam RIBUAN = "); scanf("%d",&a);

 rb= a/1000;
 rt= (a-rb*1000)/100;
 pul= (a-rb*1000-rt*100)/10;
 sat = (a-rb*1000-rt*100-pul*10);

 printf("%d RIBUAN %d RATUSAN %d PULUHAN %d SATUAN",rb,rt,pul,sat);
 getch();
}
