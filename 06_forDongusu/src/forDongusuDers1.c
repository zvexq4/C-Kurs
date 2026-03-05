// Döngü Nedir?
// Döngüler, belirli bir koşul sağlandığı sürece tekrarlanan kod bloklarıdır.
// C dilinde üç tür döngü vardır: for, while ve do-while döngüleri.
#include <stdio.h>
int main() {
    // For Döngüsü
    // For döngüsü, belirli bir sayıda tekrarlanacak kod blokları için kullanılır.
    // Yapısı: for (başlatma; koşul; artış) { kod bloğu }
   
    /* int sayac;
   for(sayac = 1; sayac <= 5; sayac++ ){
        printf("%d Merhaba\n",sayac); 
    }*/

   //1 den 10 a kadar olan sayıların toplamını yazan bir program yazıcaz 
   /*int i, toplam= 0;
   for(i = 1; i <= 10; i++){
         toplam +=  i; 
   }
    printf("toplam = %d\n",toplam);*/

    //faktoryel hesaplama programı yapımı 
    int i, fakt = 1, sayi;
    printf("faktoryel sayınızı giriniz = ");
    scanf("%d", &sayi);
    for(i = 1; i <= sayi;i++){
        fakt *= i;
    }
    printf("%d!  = %d\n",sayi,fakt);
    return 0;
}