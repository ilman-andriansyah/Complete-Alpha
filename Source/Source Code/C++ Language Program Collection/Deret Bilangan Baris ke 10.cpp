#include <stdio.h>
#include <conio.h>
main()
{ int i,m,n,c;
clrscr();
printf("Masukkan Jumlah Baris: "); scanf("%d",&m);
c=0;
for (i=1;i<=m;i++){
     printf("\n");
 for(n=1;n<=i;n++){
	   c=c+1;
	   printf("%d ",c);
	   printf(" ");
	   }
	  }

 getch();
}
