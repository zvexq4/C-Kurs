/*
strcmp, iki diziyi karşılaştırır ve :
eğer eşitse 0
ilk dizi sözlük sırasına göre önce geliyorsa negatif bir değer
ilk dizi daha sonra geliyorsa pozitif bir değer döner 
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char dizi1[] = "Bİlisim";
    char dizi2[] = "Bilim";
    int sonuc;
    sonuc = strcmp(dizi1,dizi2);
    if(sonuc == 0)
    {
        printf("iki ifade Eşit\n");
    }
    else if(sonuc < 0)
    {
        printf("ilk ifade sözlükte önce gelir\n");
    }
    else
    {
        printf("2. ifade sözlükte önce gelir \n");
    }
    return 0;
}
