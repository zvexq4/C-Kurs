#include <stdio.h>
#include <string.h>
typedef struct{
    char ad[20];
    char soyad[20];
    int notlar[3];
}Ogrenci;

int main () {
    Ogrenci ogr[3];
    char ad[20];
    for(int i = 0; i < 3; i++){
        printf("%d. Adi:", i+1);
        scanf("%s", ogr[i].ad);
        printf("%d. Soyad:", i+1);
        scanf("%s", ogr[i].soyad);
        for(int j = 0; j < 3; j++){
            printf("%d. ogrencinin %d. notunu giriniz:",i+1,j+1);
            scanf("%d", &ogr[i].notlar[j]);
        }
    }

    for(int i = 0; i < 3; i++){
        ogr[i].notlar[1] += 10;
    }

    printf("Aramak Istedigini Kisinin Adi: ");
    scanf("%s", ad);
    
    for(int i = 0; i < 3; i++)
    {
        int kontrol;
        kontrol =  strcmp(ad, ogr[i].ad);//strcmp ile karşılaştırma yapıyorum veri 0 ise bulunur
        if(kontrol == 0)
        {
            printf(" Ad    : %s\n",ogr[i].ad);
            printf(" Soyad :%s\n",ogr[i].soyad);
            for(int j = 0; j < 3; j++)
            {
                printf("%d. Öğrencinin %d. Notu : %d\n",i+1,j+1,ogr[i].notlar[j]);
            }
        }
    }

        



    return 0;
}
