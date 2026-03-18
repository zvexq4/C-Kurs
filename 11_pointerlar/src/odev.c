/*
Atatürk
tatürk
atürk
türk
ürk
rk
k
*/
#include<stdio.h>

int main()
{
    char *ptr = "Ataturk";
    while(*ptr != '\0')
    {
        printf("%s\n", ptr);
        ptr++;
    }
    return 0;
}
