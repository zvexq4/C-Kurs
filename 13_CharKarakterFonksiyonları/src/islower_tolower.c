/*
islower() -> karakterin küçük harf olup olmadığını kontrol eder
tolower() -> karakteri küük harfe dönüştürür.
*/

#include<stdio.h>
#include<ctype.h>

int main()
{
    char kr = 'A';
    if(islower(kr))
    {
        printf("Küçük Harf\n");
    }
    else
    {
        printf("Büyük harf\n");
    }
    kr = tolower(kr);
    printf("%c\n", kr);

    return 0;
}

