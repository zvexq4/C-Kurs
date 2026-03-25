/*
strtok()
Bir karakter dizisini belirlenen ayraçlara göre bölmeyi sağlar.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char cumle[] = "Cesaret, korkuya ragmen dogru olanı yapmaktir";
    printf("Orjinal\n");
    printf("%s\n",cumle);
    char *kelime;
    
    kelime = strtok(cumle,", ");
    
    
    printf("Sonraki\n");
    printf("\n%s\n",cumle);
    
    kelime = strtok(NULL,", "); //strtok kaldığı yeri hatırladığı için Null dan devam et diyoruz 
    printf("%s\n",kelime);
    return 0;
} //bunu böyle kulanmak yerine while dongüsüile kulanabilirsiniz misal kelime != NULL olana kadar devam eder.
