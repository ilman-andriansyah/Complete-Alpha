#include <stdio.h>
#include <conio.h>
main()
{ int n,x,y;
clrscr();
n=5;
for(x=1;x<=n;x++){
for(y=x;y<=n;y++){
printf(" ");//rata kiri
}
for(y=1;y<=x;y++){//ratakanan
printf("*");}
printf("\n");}

 getch();
}
