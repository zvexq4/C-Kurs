/*
isdigit() -> Karakterin rakam olup olmadığını kontrol eder
atoi()    -> Bir char dizisini int e dönüştürür
*/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char veri = '1';
    if(isdigit(veri))
    {
        printf("sayisal veri\n");
    }
    else
    {
        printf("sayisal veri değil\n");
    }
    
    char dizi[] = "123";
    int sayi = atoi(dizi);
    printf("%d\n",sayi);

    return 0;
}
