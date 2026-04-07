#include<stdio.h>
typedef struct 
{
    char ad[20];
    char soyad[20];
    int notlar[3];
}Ogrenci;

int main()
{
    Ogrenci ogr[3] = {{"Ahmet","Oztürk",{10,20,30}},
                      {"Mehmet","Koca",{56,20,30}},
                      {"Hasan","Gündoğdu",{75,85,60}}
                     };
    
    for(int i = 0; i < 3;i++)
    {
        printf("Adı    : %s\n", ogr[i].ad);
        printf("Soyadı : %s\n", ogr[i].soyad);
        for(int j = 0; j < 3;j++)
        {
            printf("Not%d :%d\n",j + 1,ogr[i].notlar[j]);
        }
    }


    return 0;
}