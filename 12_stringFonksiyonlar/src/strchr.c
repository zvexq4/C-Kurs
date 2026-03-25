/*
strchr, bir dizide belirli bir karakteri arar ve bulunduğu ilk yerin adresini döner. Eğer 
karakter bulunamazsa NULL döner.
Bulunan değer adres verisi olacağı için dönen değer pointer da saklanmalıdır.
*/
#include<stdio.h>
#include<string.h>

int main()
{
char dizi[] = "Merhaba Dünya";
char *ptr;

ptr = strchr(dizi,'D');// D harfini arıyoruz adreste 

if(ptr != NULL)
{
    printf("Değer Bulundu : %p\n", ptr);
}
else
{
    printf("Değer Bulunamadı\n");
}

    return 0;
}
