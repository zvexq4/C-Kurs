//bir karakterin sesli harf olup olmadığını kontrol eden fonksiyon
#include<stdio.h>

int sesliHarfMi(char kr);// fonksiyon prototipi

int main()
{
    char karakter;
    printf("Bir karakter giriniz = ");
    scanf("%c",&karakter);
    if(sesliHarfMi(karakter))//fonksiyon true folse değer döndürmesine göre kontrol 
    {
        printf("Sesli Harf\n");
    }
    else
    {
        printf("Sesiz Harf\n");
    }
    return 0;
}

int sesliHarfMi(char kr)//fonksiyon yapısı
{
    char sesli[] = "aeıioöuüAEIİOÖUÜ";
    int i = 0;
    while(sesli[i] != '\0')
    {
        if(sesli[i] == kr)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
