#include<stdio.h>
#include<string.h>//strlen komutunu kulanmak için dahil edildi 
#include<stdlib.h>//malloc komutunu kullanmak için dahil edildi
int main()
{
    char metin[] = "abcdef";
    printf("%s sizeof: %lu\n",metin, sizeof(metin));//çıktısı 7 çünkü dizi boyutunu hesaplıyor /0 gizli null var 
    printf("%s strlen: %lu\n",metin, strlen(metin));//çıktısı 6 çünkü karaktr hesaplıyor
    printf("\n-------\n");
    char *ptr;
    int krSayi = 0;
    ptr = malloc(100);
    
    printf("Metninizi Giriniz : ");
    scanf("%[^\n]s",ptr);//[^\n] ifadesi enter basılana kadar metni al demek
    
    printf("Metniniz :%s\n",ptr);
    
    printf("%s sizeof : %lu\n",ptr,sizeof(ptr));
    /*pinter da sizfeof ile boyutunu öğrenemeyiz çünkü tutuğu adres bilgisinin boyutunu verir o da 
    bilgisayardan bilgisayara değişir ya 8 byte yada 4 byte değerini verir*/
    printf("%s sizeof : %lu\n",ptr,strlen(ptr));

    while(*ptr != '\0')
    {
        krSayi++;
        ptr++;
    }
    ptr = ptr - krSayi;
    printf("%s kendi hesabımız : %d\n",ptr,krSayi);

    return 0;
}

