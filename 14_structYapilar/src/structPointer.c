#include<stdio.h>
typedef struct 
{
    char ad[20];
    int yas;
    float boy;
}Kisi;
int main()
{
    Kisi k = {"Ali",15,1.70};
    Kisi *ptr;//aynı yapıda bir pointer oluşturuyoruz 
    ptr = &k; //burada pointer a k struct yapısının adresini gönderiyoruz
    printf("Adı : %s\n",ptr->ad);//burada ise ok ile ad değerini yazdırabiliriz.
    printf("Yaş : %d\n",ptr->yas);
    printf("Boy : %.2f\n",ptr->boy);

    ptr->yas += 1;//değişimi de bu şekilde sağlayabiliriz.
    printf("Yaş Güncel : %d\n",ptr->yas);

    return 0;
}