//kulanıcının girdiği sayıya kadar tam bölenleri toplama programı
#include<stdio.h>
int tamBolTop(int sayi);//fonksiyon prototipi(imzası)
int main(){
    int sayi,sonuc,flag=0;
    printf("bir sayı giriniz = ");
    scanf("%d",&sayi);
    if(sayi < 0){// negatif sayi hesaplaması için
        sayi *= -1;
        flag += 1;
    }
    sonuc = tamBolTop(sayi);//fonksiyon çağrısı 
    if(flag == 1){// yazdırmak için tekrardan negatife dönüşüm
        sayi *= -1;
    }
    printf("%d sayısının tam bölen toplamı = %d\n",sayi,sonuc);
}
int tamBolTop(int sayi){//fonksiyon yapısı
    int i, top = 0;
    for(i = 1;i <= sayi;i++){
        if(sayi % i == 0){
            top += i;
        }
    }
    return top;
}