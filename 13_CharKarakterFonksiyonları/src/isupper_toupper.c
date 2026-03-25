/*
isupper() -> Karakterin büyük harf olup olmadığını kontrol eder.
toupper() -> Karakteri büyük harfe dönüştürür.
*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    char kr = 'a';
    if(isupper(kr))
    {
        printf("Karakter büyük harf\n");
    }
    else
    {
        printf("Karakter Küçük harf\n");
    }
    kr = toupper(kr);
    printf("%c\n",kr);

    return 0;
}
