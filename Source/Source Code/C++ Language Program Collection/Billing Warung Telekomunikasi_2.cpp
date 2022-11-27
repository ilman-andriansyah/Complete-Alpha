#include <stdio.h>
#include <conio.h>
main()
{
	int mj,mm,md,sj,sm,sd,tj,tm,td,tjm,tp,jb;
	clrscr();
	printf("Masukkan jam mulai bicara : ");scanf("%d",&mj);
	printf("Masukkan menit mulai bicara : ");scanf("%d",&mm);
	printf("Masukkan detik mulai bicara : ");scanf("%d",&md);
	printf("Mulai bicara : %d : %d : %d\n",mj,mm,md);
	printf("Masukkan jam selesai bicara : ");scanf("%d",&sj);
	printf("Masukkan menit selesai bicara : ");scanf("%d",&sm);
	printf("Masukkan detik selesai bicara : ");scanf("%d",&sd);
	printf("Selesai bicara : %d : %d : %d\n",sj,sm,sd);
	tj=sj-mj;tm=sm-mm;td=sd-md;
	printf("Total Durasi : %d : %d : %d\n",tj,tm,td);
	tjm=tj*60;tp=tm+tjm;
	if(td>=1){tp++;}
	printf("Total pulsa %d\n",tp);jb=tp*150;
	printf("Jumlah bayar Rp.%d",jb);
	getch();
}
