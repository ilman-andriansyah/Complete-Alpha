#include <stdio.h>
#include <conio.h>
main()
{   int jm,i,nim,jn,nt,nil; char nm[10]; float nr;
clrscr();
jn=0; nt=0; nr=0;
printf("Jumlah Mahasiwa : "); scanf("%d",&jm);
puts("Daftar Nilai Ujian");
gotoxy(1,3); printf("No NIM");
gotoxy(10,3); printf("NAMA MAHASISWA");
gotoxy(25,3); printf("NILAI UJIAN");
puts("\n-----------------------------------");
for(i=1;i<=jm;i++){
   printf("%d.\n",i);
  if (i<=jm) {
      gotoxy(3,i+4);fflush(stdin); scanf("%d",&nim);
      gotoxy(10,i+4);fflush(stdin); gets (nm);
      gotoxy(30,i+4);fflush(stdin); scanf("%d",&nil);
     }
     jn=jn+nil;
     if(nt>=nil){
      nil=nt;
      }
      else{ nt=nil;
      }
     }
puts("\n-----------------------------------");
nr=(float)jn/jm;
printf("Jumalah Nilai = %d ",jn);
printf("\nNilai Rata-rata = %.2f",nr);
printf("\nNilai terbesar = %d",nt);
 getch();
}
