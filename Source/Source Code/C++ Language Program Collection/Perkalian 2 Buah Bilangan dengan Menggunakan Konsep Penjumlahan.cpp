#include <stdio.h>
#include <conio.h>
main()
{    int b1,b2,i;
clrscr();
do{
   puts("BILANGAN HARUS BILANGAN BULAT POSITIF >0");
   printf("Masukkan Bilangan Bulat Ke-1 = "); scanf("%d",&b1);
   printf("Masukkan Bilangan Bulat Ke-2 = "); scanf("%d",&b2);

   if(b1>=0 && b2>=0){
   puts("--------------------------------");
   printf("Bilangan Bulat Ke-1 = %d\n",b1);
   printf("Bilangan Bulat Ke-2 = %d ",b2);
   printf("\nMaka %d x %d = %d ",b1,b2,b1*b2);
   printf("\n%d Maka didapatkan dengan cara : ",b1*b2);
   for(i=1;i<=b2;i++){
   printf("%d ",b1);
   if (i < b2){
   printf("+ ");
   }
  }
  printf("\n");
  }else if (b1<0 || b2<0){
  puts("Baca Ketentuan Diatas...!!!");

  }
}while (b1<=0 || b2<=0);

getch();
}
