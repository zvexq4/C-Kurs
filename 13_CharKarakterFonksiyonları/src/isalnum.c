/*
isalnum() -> Karakterin alfasayısal olup olmadığını kontrol eder.
Verilen char karakterinin bir harf veya rakam olup olmadığını kontrol eder.
*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    char kr = '1';
    if(isalnum(kr))
    {
        printf("karakter sayı veya harftir\n");
    }
    else
    {
        printf("Girilen karakter alfakarakter değildir\n");
    }

    return 0;
}
