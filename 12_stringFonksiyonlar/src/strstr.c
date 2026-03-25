/*
strstr, bir dizide başka bir diziyi(kelime arar ve bulunduğ yerin adresini döner 
Eğer bulunamazsa NULL döner. (Büyük küçük harf duyarlılığı vardır)
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char dizi[] = "Merhaba Dünya";
    char *ptr;

    ptr = strstr(dizi,"Merhaba");

    if(ptr != NULL)
    {
        printf("adres Bulundu  : %p\n",ptr);
    }
    else
    {
        printf("adres bulunamadı\n");
    }

    return 0;
}
