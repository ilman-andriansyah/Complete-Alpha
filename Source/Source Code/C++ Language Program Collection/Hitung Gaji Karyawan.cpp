#include <stdio.h>
#include <conio.h>
main()
{ char id[10];  int jk; float dbyr,gaji;
 clrscr();
 printf("Masukkan ID karyawan (Mask. 10 kar) : "); gets (id);
 printf("Masukkan total jam kerja            : "); scanf("%d",&jk);
 printf("Jumlah Gaji/jam                     : Rp. "); scanf("%f",&dbyr);
 printf("Gaji        :Rp. %.2f\n",jk*dbyr);
 getch();
}
