#include <stdio.h>
#include <conio.h>
main()
{ int cel; float rea,fah,kel;
 clrscr();
 printf("Konversi Suhu\n\n");
 printf("Input SUhu Dalam Derajat Celcius ="); scanf("%d",&cel);
 rea=(float) 4/5*cel; fah=(float) 9/5*cel+32; kel=273+cel;
 printf("Hasil Konversinya adalah =\n");
 printf("%.2fReamur\n%.2fFahrenheit\n%.2fKelvin\n",rea,fah,kel);
 getch();
}
