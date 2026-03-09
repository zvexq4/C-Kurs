#include<stdio.h>
int main(){
    int sayi,toplam = 0,basamak;
    printf("sayınızı giriniz = ");
    scanf("%d",&sayi);

    //negatif sayı girilirse sayıyı pozitife çeviriyoruz.
    if(sayi < 0 ){
        sayi *= -1;
    }
    while(sayi > 0){
        basamak = sayi % 10;
        toplam += basamak;
        sayi /= 10;
    }
    printf("%d\n",toplam);
}