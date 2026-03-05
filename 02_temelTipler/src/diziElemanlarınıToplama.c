#include<stdio.h>
int main(){ // main fonksiyonu programın başlangıç noktasıdır
    int sayilar[] = {10,20,30,40,50};// bir dizi tanımlanır ve 5 adet tam sayı değeri atanır
    int toplam = 0;
    double ortalama;
    for(int i = 0;i < 5;i++){// döngü kullanılarak dizinin her bir elemanı toplanır.
        toplam += sayilar[i];
    }

    printf("sonuc = %d\n",toplam);

    ortalama = toplam / 5.0;
    printf("ortalaması = %.2lf\n",ortalama);

    return 0;
}