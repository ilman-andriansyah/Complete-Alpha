#include <stdio.h>
#include <conio.h>

main()
{
	clrscr();
	int tb;
	printf("Tinggi Badan : ");scanf("%d",&tb);
	if(tb>=0 && tb<=100){printf("Kategori Tinggi saudara adalah Pendek \n");}
	else if(tb>=101 && tb<150){printf("Kategori Tinggi saudara adalah Sedang \n");}
	else if(tb>=151 && tb>151){printf("Kategori Tinggi saudara adalah Tinggi \n");}
	getch();
}
