#include <stdio.h>
#include <conio.h>

main()
{ int a,b;
 printf("MASUKAN ANGKA 1 =  "); scanf("%d",&a);
 printf("MASUKAN ANGKA 2 =  "); scanf("%d",&b);

 printf("%d + %d = %d\n",a,b,a+b);
 printf("%d - %d = %d\n",a,b,a-b);
 printf("%d x %d = %d\n",a,b,a*b);
 printf("%d : %d = %d\n",a,b,(float)a/b);
 printf("%d mod %d = %d\n",a,b,a%b);
 printf("%d div %d  = %d\n",a,b,a/b);


 getch();
}