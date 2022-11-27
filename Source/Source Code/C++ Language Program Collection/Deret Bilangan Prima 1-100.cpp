#include <stdio.h>
#include <conio.h>
main()
{ int i,n,cek,a;
clrscr();
printf("Masukkan angka: "); scanf("%d",&a);
i=1;
for (i=1;i<=a;i++)
{ cek=0;
for (n=2;n<i;n++){
if(i%n==0){
   cek=1;
   }
  }
  if (cek==0){
  printf("%d ",i);
  }
 }
 getch();
}
