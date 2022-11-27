#include <stdio.h>
#include <conio.h>

main()
{     float pb,lb,tb,vol_balok;
	clrscr();
	puts("**********************************");
	puts("*** MENGHITUNG VOLUME BALOK    ***");
	puts("***created by : Enjank Rohiman ***");
	puts("**********************************");
	printf("\n\n");
	printf("PANJANG BALOK = "); scanf("%f",&pb);
	printf("LEBAR BALOK   = "); scanf("%f",&lb);
	printf("TINGGI BALOK  = "); scanf("%f",&tb);
	
	vol_balok=pb*lb*tb;
	printf("\n\n");
	
	printf("VOLUME BALOK ADALAH %.2f",vol_balok);
	getch();
}
