#include<stdio.h>
int main(){
    //& isaretini kullanarak sayi1'in adresini scanf fonksiyonuna gonderiyoruz.
    //scanf fonksiyonu, kullanicidan girdi alirken degiskenin adresini kullanir.
    int sayi1, sayi2, toplam;
    /*float floatSayi;
    printf("Lutfen bir tam sayi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. tam sayınızı giriniz: ");
    scanf("%d", &sayi2);
    printf("bir ondalıklı sayi giriniz : ");
    scanf("%f", &floatSayi);
    printf("girilen tam sayi: %d\n",sayi1);
    printf("girilen ikinci tam sayi: %d\n",sayi2);
    printf("girilen ondalıklı sayı: %.2f\n",floatSayi);*/
    printf("lütfen iki adet tam sayı giriniz :\n");
    scanf("%d%d",&sayi1,&sayi2);
    //scanf fonksiyonu ile birden fazla girdi alabiliriz. Bu durumda, her bir girdi için uygun format belirteçlerini kullanarak ve değişkenlerin adreslerini vererek scanf fonksiyonunu çağırabiliriz.
    toplam = sayi1 + sayi2;
    printf("1.Sayı : %d\n",sayi1);
    printf("2.Sayi : %d\n",sayi2);
    printf("Sayıların Toplamı = %d\n", toplam);


    return 0;
}  