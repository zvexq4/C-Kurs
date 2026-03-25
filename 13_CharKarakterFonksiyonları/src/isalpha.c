/*
isalpha() - Karakterin harf olup olmadığını kontrol eder.

true (0' dan farklı bir değer) : eğer verilen karakter bir harf ise (hem küük hem de
Büyük harf), isalpha() doğru (true) değeri döner.

false (0) : Eğer verilen karakter harf değilse (rakam, sembol, boşluk vb.),
isalpha() yanlış (false değeri döndürür.
*/
#include<stdio.h>
#include<ctype.h>// isalpha kulanmak için gerekli küüphane

int main()
{
    char kr = 'a';
    
    if(isalpha(kr))
    {
        printf("Bu bir harftir\n");
    }
    else
    {
        printf("Bu bir harf değildir\n");
    }

    return 0;
}
