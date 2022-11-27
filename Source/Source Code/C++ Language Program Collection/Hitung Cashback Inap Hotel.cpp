#include <stdio.h>
#include <conio.h>
#define satu_dollar 12850
main()
{ int tci,tco,li;float tid,t_bayar,cash,c_back; char nt[10];
 clrscr();
 
 puts("WELCOME AT HOTEL \"DIPATI UKUR\"");
 puts("------------------------------");
 printf("NAMA TAMU				= "); gets(nt);
 printf("TANGGAL CHECK IN		= "); scanf("%d",&tci);
 printf("TANGGAL CHECK OUT		= "); scanf("%d",&tco);
 printf("TARIF INAP/HARI		= $"); scanf("%f",&tid);
 puts("----------------------------------------------");
 li=tco-tci;
 t_bayar=li*tid*satu_dollar;
 printf("LAMA MENGINAP			= %d HARI\n",li);
 printf("TOTAL BAYAR			= Rp. %.2f\n",t_bayar);
 printf("CASH					= Rp. "); scanf("%f",&cash);
 c_back=cash-t_bayar;
 puts("----------------------------------------------");
 printf("CASHBACK				= Rp. %.2f",c_back);
 getch();
}
