/*
Bir char dizisinde kullanıcıdan metin alın.
Bu metin içerisinden silinecek karakteri alın
Bu char dizisinin adresini bir fonksiyona gönderin.
Bu fonksiyonda bir pointer oluşturup yeni oluşacak metnin adresini
tutmasını sağlayın
Yeni oluşacak metnin adreini main fonksiyonuna return edin
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *harfEksilt(char *str, char ch)
{
    int uzunluk = strlen(str);
    char *chptr = malloc(uzunluk *sizeof(char)+1);
    int j = 0;
    for(int i = 0; i < uzunluk;i++)
    {
        if(str[i] != ch)
        {
            chptr[j] = str[i];
            j++;
        }
    }
    chptr[j] = '\0';
    return chptr;
}
int main()
{
    char metin[100];
    char kr;
    
    printf("Bir Metin Giriniz : ");
    fgets(metin,sizeof(metin),stdin);

    printf("Cıkarılacak olan karakteri giriniz : "),
    scanf("%c",&kr);

    char *eksikHarfMetin = harfEksilt(metin,kr);

    if(eksikHarfMetin !=  NULL)
    {
        printf("Yeni metin : %s\n",eksikHarfMetin);
    }
    else
    {
        printf("Karakter bulunamadı\n");
    return 0;
    }
}
