/*
strrev(string):
Bir karakter dizisini terse çevirmeyi sağlar.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char dizi[] = "Merhaba Dünya";
    
    strrev(dizi);
    
    printf(" tersi : %s\n",dizi);

    return 0;
}
