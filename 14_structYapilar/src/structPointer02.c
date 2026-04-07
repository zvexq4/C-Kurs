#include<stdio.h>
typedef struct //struct şablonu 
{
    char ad[20];
    int yas;
    float boy;
}Kisi;

void guncelle(Kisi *kisi);//fonksiyon prototibi

int main()
{
    Kisi k = {"Ali",15,1.70};

    printf("Yaş Önceki hali : %d\n",k.yas);

    guncelle(&k);//fonksiyona k structın adresini gönderiyoruz 

    printf("Yaş sonraki Hali : %d\n",k.yas);


    return 0;
}
void guncelle(Kisi *kisi)//fonksiyon yapısı 
{
    kisi->yas = 25;//gelen adrese doğrudan değişim yapıyoruz 
}