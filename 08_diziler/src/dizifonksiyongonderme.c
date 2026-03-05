#include<stdio.h>
int elemanTopla(int arr[],int elemanSayisi);//Fonksiyon prototipi

int main(){//Diziyi ve eleman sayısını tanımla
    int dizi[]={10,20,30,40,50};
    int elemanSayisi = sizeof(dizi) / sizeof(dizi[0]);//Dizideki elemanların sayısını hesapla
    int toplam = elemanTopla(dizi,elemanSayisi);//Fonksiyonu çağır ve sonucu al
    printf("%d\n",toplam);//Sonucu ekrana yazdır

    return 0;
}
int elemanTopla(int arr[],int elemanSayisi){//Dizideki elemanları toplayan fonksiyon
    int toplam = 0;
    for(int i = 0;i < elemanSayisi;i++){//Dizinin her elemanını toplam değişkenine ekle
        toplam += arr[i];
    }
    return toplam;//toplam değişkenini main dizinine gönder.
}