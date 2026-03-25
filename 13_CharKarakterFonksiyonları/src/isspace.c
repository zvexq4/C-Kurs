/*
isspace() -> karakterin boşluk tab veya yeni satır olup olmadığını kontrol eder
whitespace(beyaz boşluk) da denir.
*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    char kr =' ';
    if(isspace(kr))
    {
        printf("Karakter whitespace\n");
    }
    else
    {
        printf("karakter whitespace değildir\n");
    }

    return 0;
}

