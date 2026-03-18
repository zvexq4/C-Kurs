#include<stdio.h>

void topla(int *s1,int *s2,int *top);//fonksiyon prototipi

int main()
{
    int a = 15, b = 20,toplam;
    
    topla(&a,&b,&toplam);//fonksiyona adreslerini gönderiyoruz
    printf("%d\n",toplam);

    return 0;
}
void topla(int *s1,int *s2, int *top)//fonksiyon yapısı
{
    *top = *s1 + *s2;//yıldız koymasak hata verir adres bilgisidir çünkü 
}
