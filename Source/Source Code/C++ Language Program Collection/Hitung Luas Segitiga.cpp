#include <stdio.h>
#include <conio.h>

main()
{ int x,
clrscr();
puts("******************************");
puts("***MENGHITUNG LUAS SEGITIGA***");
puts("******************************");
printf("\nPANJANG ALAS SEGITIGA = "); scanf("%f",&pas);
printf("\nTINGGI SEGI TIGA      = "); scanf("%f",&tst);
luas_sgt=0.5*pas*tst;
puts("---------------------------------");
printf("LUAS SEGITIGA ADALAH %.2F\n\n",luas_sgt);
puts("Tekan sembarang tombol untuk kembali ke source code...!");
getch();
}