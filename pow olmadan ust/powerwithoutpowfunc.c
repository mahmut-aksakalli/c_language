 #include <stdio.h>
 #include <conio.h>

 double kuvvet_al(double taban, int kuvvet)
 {

     double sonuc=1;
     int i,kuvvet2=abs (kuvvet);
     for (i=0; i<kuvvet2; i++)
     {
         sonuc*= taban;
     }

     if (kuvvet>=0) return sonuc;
     return 1/sonuc;
 }

 int main ()
 {
     double sonuc,taban;
     int kuvvet,a;
     system("cls");
     while(a!=-1)
     {
        printf("Taban ve kuvveti giriniz.");scanf("%lf%d",&taban,&kuvvet);
        if(taban==0 && kuvvet==0)
        {
            printf("0 uzeri 0 tanimsizdir.Devam etmek icin bir tusa basiniz.n");
            getch();continue;
        }
        else
        {
            break;
        }
     }
     sonuc=kuvvet_al(taban,kuvvet);
     printf("Sonuc:%f",sonuc);
     getch();return 0;
 }

