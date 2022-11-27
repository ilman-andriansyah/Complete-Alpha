#include <stdio.h>
#include <conio.h>
main()
{
 clrscr();
 int bil1,bil2;
 printf("Pembagian menggunakan Pengurangan Berulang\n");
 do
 {
	printf("Masukkan Bilangan bulat pertama : ");
	scanf("%d",&bil1);
	printf("Masukkan Bilangan bulat kedua : ");
	scanf("%d",&bil2);
 }while(bil1%bil2!=0);
 int remainder=bil1;
 int subtractionCount=0;
 while(remainder>0)
 {
	printf("%d - %d = %d \n", remainder,bil2,(remainder-bil2));
	remainder-=bil2;
	subtractionCount++;
 }
 printf("\n\n%d / %d = %d\n",bil1,bil2,subtractionCount);
 getch();
}
