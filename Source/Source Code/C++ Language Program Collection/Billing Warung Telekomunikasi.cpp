#include <stdio.h>
#include <conio.h>
main()
{
	int jm,td,m,mm,dm,js,ms,ds,lj,lm,ld,jp,jb,cek;
	clrscr();
	puts("Mulai Bicara		=	:	:	");
	puts("Selesai Bicara	=	:	:	");
	gotoxy(19,1);scanf("%d",&jm);
	gotoxy(22,1);scanf("%d",&mm);
	gotoxy(24,1);scanf("%d",&dm);
	gotoxy(19,2);scanf("%d",&js);
	gotoxy(22,2);scanf("%d",&ms);
	gotoxy(24,2);scanf("%d",&ds);
	lj=js-jm;
	if(ms>mm)lm=ms-mm
	else{lj=lj-1;lm=ms+60-mm;}
	if(ds>dm)ld=ds-dm;
	else{lm=lm-1;ld=ds+60-dm;}
	td=lj*60*60+lm*60+ld;
	jp=td/60;
	cek=td%60;
	if(cek!=0)jp=jp+1;jb=jp*150;
	printf("\nTOTAL DURASI 	= %d : %d : %d \n",lj,lm,ld);
	printf("TOTAL PULSA 	= %d\n",jp);
	printf("JUMLAH BAYAR 	= Rp. %d",jb);
}