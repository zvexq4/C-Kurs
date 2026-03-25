/* 
strncpy, bir diziden diğerine belirli sayıda karakter kopyalar. kaynak dizi hedef diziden kısaysa
kalan boşluklar \0 ile doldurulur.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char dizi1[] = "Merhaba Dünya";
    char  dizi2[20];
    
    strncpy(dizi2,dizi1,4);
    
    dizi2[4] = '\0'; // diziyi kendimiz manuel olarak bitiriyouz
    
    printf("kopyalanan karakter  : %s\n",dizi2); // kopyayı yazdırıyoruz

    return 0;
}
