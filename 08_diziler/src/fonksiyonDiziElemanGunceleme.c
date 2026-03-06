#include<stdio.h>
void elemanGuncele(int arr[],int elSayisi);//fonksiyon prototipi(imzası)

int main()
{
    int dizi[] = {10,20,30,40,50};
    int elemanSayisi;
    elemanSayisi = sizeof(dizi) / sizeof(dizi[0]);
    printf("Dizinin İLk Hali\n");
    for(int i = 0; i < elemanSayisi; i++)
    {
        printf("%d  ",dizi[i]);

    }
    printf("\n\n ");

    elemanGuncele(dizi,elemanSayisi);//dizi fonksiyona gönderme
    
    printf("Dizinin Son Hali\n");
    for(int i = 0; i < elemanSayisi; i++)
    {
        printf("%d  ",dizi[i]);
    }
    printf("\n\n");

return 0;
}

void elemanGuncele(int arr[],int elSayisi)//fonksiyon düzeni
{
    for(int i = 0; i < elSayisi; i++)
    {
        arr[i] += 100;
    }
}
