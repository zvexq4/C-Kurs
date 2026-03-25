#include<stdio.h>

struct Ogrenci
{
    char ad[20];
    char soyad[20];
    int sinif;
    double aidat;
}ogr1;//burda ogr1' i  en baştan tanımlıyorum 

int main()
{
    //struct Ogrenci ogr1 ={}
    printf("Ad Giriniz : ");
    scanf("%s",ogr1.ad);
    printf("Soyad Giriniz : ");
    scanf("%s",ogr1.soyad);
    printf("Sinif Giriniz : ");
    scanf("%d",&ogr1.sinif);
    printf("Aidat giriniz : ");
    scanf("%lf",&ogr1.aidat);
    
    printf("Ad : %s\n Soyad : %s\n Sinif : %d\n Aidat : %.2lf\n",
           ogr1.ad, ogr1.soyad, ogr1.sinif, ogr1.aidat);

    return 0;
}
