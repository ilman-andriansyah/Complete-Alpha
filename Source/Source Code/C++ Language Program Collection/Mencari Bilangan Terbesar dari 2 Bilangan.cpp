#include <stdio.h>
#include <conio.h>
main()
{ int a,b,max;

 clrscr();
 printf("Masukan Bilangan Pertama = "); scanf ("%d",&a);
 printf("Masukan Bilangan Kedua   = "); scanf ("%d",&b);
 if(a>b){max=a;}
 else{max=b;}
 printf("Bilangan Terbesar adalah %d",max);
 getch();
}
