#include<stdio.h>
char  *karakterBul(char *metin,char kr);//fonksiyon prototibi
int main()
{
    char *metin = "Merhaba";
    char kr = 'h';
    char *sonuc;
    sonuc = karakterBul(metin,kr);//fonksiyona gönderme
    if(sonuc != NULL)//bulunursa
    {
        printf("Karakteriniz %p konumunda bulundu\n",sonuc);
    }
    else//bulunmazsa
    {
        printf("karakteriniz Bulunamadi.\n");
    }

    return 0;
}
char *karakterBul(char *metin,char kr)//fonksiyon yapısı
{
    while(*metin != '\0')
    {
        if(*metin == kr)
        {
            return metin;//bulunan metni gönderme
        }
        metin++;
    }
    return 0;//bulunmazsa null gönderme
}
