/*
strcat(str1, str2);
strcat bir dizinin sonuna başka bir diziyi ekler.
str2 dizisini str1 dizisinin sonuna ekler 
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50] = "Merhaba ";
    char str2[] = "Dünya";
    strcat(str1, str2);
    printf("%s\n", str1);
    
    return 0;
}
