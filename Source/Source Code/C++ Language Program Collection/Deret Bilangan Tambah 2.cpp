#include <stdio.h>
#include <conio.h>
main()
{
 int i,a=1,b=2,c;
 for(i=1;i<=5;i=i++)
 {
   printf("%d ",a);
   printf("%d ",b);
   c=a+b;
   printf("%d ",c);
   a=a+2;
   b=b+2;
 }
 getch();
}
