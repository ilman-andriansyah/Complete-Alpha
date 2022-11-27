#include<stdio.h>
#include<conio.h>

main()
{
 clrscr();
 char nm [20],hm;float nq,nt,nuts,nuas,na;
 printf("Nama Mahasiswa	: ");gets(nm);
 printf("Nilai Quiz	: ");scanf("%f",&nq);
 printf("Nilai Tugas	: ");scanf("%f",&nt);
 printf("Nilai UTS	: ");scanf("%f",&nuts);
 printf("Nilai UTS	: ");scanf("%f",&nuas);
 na=0.1*nq+0.2*nt+0.3*nuts+0.4*nuas;
 if(na>=80 && na<=100)hm='A';
 else if(na>=66 && na<79)hm='B';
 else if(na>=46 && na<66)hm='C';
 else if(na>=31 && na<46)hm='D';
 else hm='E';
 printf("Nilai Akhirnya = %.2f\n",na);
 printf("Huruf Mutunya  = %c",hm);getch();
}
