/* kulanıcıdan bir sayı alın, 1 den o sayıya kadar olan tek sayıların toplamını 
yapan fonksiyonu yapınız */
#include<stdio.h>
int tekToplam(int sayi);//fonksiyon prototipi
int main(){
    int sayi,sonuc;
    printf("bir sayı giriniz = ");
    scanf("%d",&sayi);
    if(sayi < 0){// negatif sayıları pozitife dönüştürüyorum
        sayi*= -1;
    }
    sonuc =  tekToplam(sayi);//fonksiyon çağrısı
    printf("Tek Toplam = %d\n",sonuc);
}
int tekToplam(int sayi){//fonksiyon yapısı 
    int i,top=0;
    for(i = 1;i <= sayi;i++){
        if(i % 2 != 0){
            top += i;
        }
    }
    return top;
}