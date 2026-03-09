#include<stdio.h>
int main(){
    //Kullanıcıdan bir sayı alıp, karesini ve küpünü hesaplama..
    int sayi, kare, kup;
    printf("bir sayı giriniz =\n");
    scanf("%d",&sayi);
    kare = sayi*sayi;
    kup = sayi*sayi*sayi;
    printf("sayının karesi = %d\n",kare);
    printf("sayının küpü = %d\n",kup);



    return 0;
}