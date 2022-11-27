#include <stdio.h>
#include <conio.h>
main()
{ int i,n,c;
clrscr();
puts("BILANGAN GENAP YANG HABIS DIBAGI 5 (20-100)");
n=100;
c=10;
for(i=1;i<n;i++){
c=c+1;
 if(c%5==0 && c%2==0)
 printf("%d ",c);
 }
 getch();
}
