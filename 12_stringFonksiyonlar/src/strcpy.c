/*
strcopy(hedef, kaynak);
strcopy bir dizi içerisini başka bir diziye kopyalar. Hedef dizi, kaynak diziiyle
aynı uzunlukta ya da daha büyük olmalıdır.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char dizi1[] = "Bilisim Dunyasi";
    char dizi2[20];

    strcpy(dizi2,dizi1);
    printf("dizi2 : %s\n",dizi2);

    return 0;
}
