#include <stdio.h>
#include <conio.h>

main()
{
 clrscr();
 int bil1,bil2,bil3,max;
 printf("Masukkan 3 Bilangan : ");scanf("%d %d %d",&bil1,&bil2,&bil3);
 if(bil1>bil2&&bil1>bil3){max=bil1;}
 else if(bil2>bil1&&bil2>bil3){max=bil2;}
 else{max=bil3;}
 printf("Bilangan terbesar adalah %d",max);
 getch();
}
