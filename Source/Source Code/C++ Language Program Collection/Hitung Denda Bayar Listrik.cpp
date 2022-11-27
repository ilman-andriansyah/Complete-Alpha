#include <stdio.h>
#include <conio.h>
main()
{ int tb,denda;char np[10],tg;
clrscr();
printf("Nama pelanggan = ");gets(np);
printf("Tanggal bayar  = ");scanf("%d",&tb);
printf("Tegangan 1 = 450\n");
printf("Tegangan 2 = 900\n");
printf("Tegangan 3 = 1200\n");
tg=getche();
switch(tb>20)
{ case 1 : if (tg=='1') denda=5000;
	   else if(tg=='2') denda=10000;
	   else denda=15000;break;
  case 0 : denda=0;break;
}
printf("\nBesarnya denda Rp. %d",denda);
getch();
}
/*
#include <stdio.h>
#include <conio.h>
main()
{ int tb,tgl,denda; char np[10],tg;
clrscr();
printf("Nama pelanggan = "); gets(np);
printf("Tanggal bayar  = "); scanf("%d",&tb);
printf("Tegangan 1=450 2=900 3=1200); tg=getch();

if (tg>20)
{ if(tg=='1') denda=5000;
  else if(tg=='2') denda=10000;
  else (tg=='3') denda=15000;
  else
}
else denda=0();

printf("\nBesarnya denda Rp. %d",denda);
getch();
}
*/