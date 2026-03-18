#include<stdio.h>
int main()
{
    int a = 15;
    int b = 20;
    int *sayi1, *sayi2;//pointer, adres tutucularımızı * işareti ile belirliyoruz 
    int toplam;

    sayi1 = &a;
    sayi2 = &b;
    
    toplam = *sayi1 + *sayi2;//* koyarak adresteki veriye git diyoruz
    printf("%d\n",toplam);
    
    return 0;
}
    

