#include<stdio.h>

typedef struct // main içerisinde her seferinde strcut yazmamak için typedef kulanıyorum
{
    char ad[20];
    char soyad[20];
    int notlar[5];

}Ogrenci;

int main()
{
    Ogrenci ogr;

    printf("Öğrenci adı :");
    scanf("%s",ogr.ad);
    
    printf("Öğrenci soyad :");
    scanf("%s",ogr.soyad);
    
    
    for(int i = 0;i <5;i++)
    {
        printf("%d. notu giriniz",i +1);
        scanf("%d",&ogr.notlar[i]);
    }
    
    printf("\n------------------\n");

    printf("Öğrenci adı : %s\n",ogr.ad);
    printf("Öğrenci soyad : %s\n",ogr.soyad);
    for(int i = 0; i < 5; i++)
    {
        printf("öğrencinin %d. Notu : %d\n",i,ogr.notlar[i]);
    }
    
    return 0;
}
