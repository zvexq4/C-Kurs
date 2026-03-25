#include<stdio.h>

struct Ogrenci //burda kulancıcağım şablonu oluşturuyorum 
{
    char ad[20];
    char soyad[20];
    int sinif;
};

int main()
{
    struct Ogrenci ogr1 = {"Ahmet","Şen",11}; // burda oluşturduğum şablonu ogr1 için kulanıyorum
    struct Ogrenci ogr2 = {"Mehmet","Sarıdogan",12}; // burada da ogr2 için kulanıyorum 
    
    ogr1.sinif --;//ogr1 sınıf 1 eksiltme

    printf("Ad : %s\n", ogr1.ad);//ogr1 içerik yazdırma
    printf("Soyad : %s\n",ogr1.soyad);
    printf("sınıf : %d\n",ogr1.sinif);
    
    printf("----------------\n");

    printf("ad : %s\n",ogr2.ad); //ogr2 içerik yazdırma
    printf("soyad : %s\n",ogr2.soyad);
    printf("sınıf : %d\n",ogr2.sinif);

    return 0;
}
