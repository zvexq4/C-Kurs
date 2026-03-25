/*
strlen(string):
srlen bir string' in uzunluğunu (karakter sayısını) verir, ancak sonlandırıcı \0
karakterini saymaz.

sizeof(string):
Bir string'in bytee cinsinden değerini verir. Sonlandırıcı  karakter olan \0
karakterini sayar.
*/
#include<stdio.h>
#include<string.h>//strlen için dahil edilen kütüphane

int main()
{
    char ad[] = "Bilişim Dünyası";
    printf("%s metnin karakter sayısı : %lu\n",ad,strlen(ad));
    printf("%s metnin byte cinsinden boyutu : %lu\n",ad,sizeof(ad));

    return 0;
}
