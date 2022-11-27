#include <stdio.h>
#include <conio.h>
#include <ctype.h>
main()
{
	int i,jgn=0,jgl=0,a,b,bjb,bil,jb,kend,lp,bayar;
	char pilih,jawab;
	do
	{
		clrscr();
		puts("Jawaban QUIZ");
		puts("1.Jawaban no.1");
		puts("2.Jawaban no.2");
		puts("3.Jawaban no.3");
		printf("Pilih 1/2/3 = ");pilih=getche();printf("\n");
		switch(pilih)
		{
			case '1' :	printf("Masukkan 2 Buah Bilangan = ");
						scanf("%d %d",&a,&b);
						printf("Hasilnya adalah %d %d %d %.2f",a+b,a-b,a*b,(float)a/b);
						break;
			case '2' :  printf("Jenis kendaraan 1.motor 2.mobil = ");
						scanf("%d",&kend);
						printf("Lama Parkir = ");scanf("%d",&lp);
						if(kend==1)//motor
						{
							if(lp<=3)bayar=2000;
							else if(lp<=8)bayar=5000;
							else bayar=12000;
						}
						else
						{
							if(lp<=3)bayar=5000;
							else if(lp<=8)bayar=10000;
							else bayar=20000;
						}
						printf("Biaya Parkir Rp. %d\n",bayar);
						break;
			case '3' :  printf("Jumlah bilangan yang akan diinput = ");
						scanf("%d",&jb);
						for(i=1;i<=jb;i++)
						{
							scanf("%d",&bil);
							switch(bil%2)
							{
								case 1 : jgl++;break;
								case 0 : jgn++;break;
							}
						}
						printf("Jumlah Bilangan Genap  = %d\n",jgn);
						printf("Jumlah Bilangan Ganjil = %d\n",jgl);
						break;
		}//end switch
		fflush(stdin);
		printf("\nMau coba lagi ? ");scanf("%c",&jawab);
	}while(toupper(jawab)=='Y');
}