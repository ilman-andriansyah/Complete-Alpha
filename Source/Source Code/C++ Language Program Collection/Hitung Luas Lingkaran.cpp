#include <stdio.h>
#include <conio.h>
#define phi 3.14

main()
{ int diameter,jari2;
  float luas_lingkaran;

  clrscr();
  printf("Panjang Diameter Lingkaran = ");
  scanf("%d" ,&diameter);

  jari2= (float) diameter / 2;
  luas_lingkaran = phi * jari2 * jari2;

  printf("Luas Lingkaran adalah %.2f" ,luas_lingkaran);
  getch;
}
