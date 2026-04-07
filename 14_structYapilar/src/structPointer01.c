#include<stdio.h>
#include<stdlib.h>//malloc calloc vb fonksiyonların kullanımı için
#include<string.h>//strcpy fonksiyonun kullanımı için  
typedef struct 
{
    char ad[20];
    int yas;
    float boy;
}Kisi;
int main()
{

    Kisi *ptr = (Kisi *)malloc(sizeof(Kisi));//belllekte kisi structı kadar yer tahsis ediyoruz.

    strcpy(ptr->ad, "Ali");//burada strcpy ile ad  değişkenini tanımlıyoruz.
    ptr->yas = 18;
    ptr->boy = 1.80;

    printf("Adı : %s\n",ptr->ad);//burada ise ok ile ad değerini yazdırabiliriz.
    printf("Yaş : %d\n",ptr->yas);
    printf("Boy : %.2f\n",ptr->boy);

    ptr->yas += 1;//değişimi de bu şekilde sağlayabiliriz.
    printf("Yaş Güncel : %d\n",ptr->yas);

    return 0;
}