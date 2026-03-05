/* Kullanıcı negatif sayı girene kadar, girilen sayılardan çift olanların toplamını hesaplıyan
c programını do-while döngüsü ile kodlayınız.
*/
#include<stdio.h>
int main(){
    int sayi = 0, toplam = 0,sayac = 0;
    do{
        sayac++;
        printf("%d. sayınızı giriniz = ",sayac);
        scanf("%d",&sayi);
        if(sayi % 2 == 0 && sayi > 0){
            toplam += sayi;
        }

    }while(sayi > 0 );
    printf("girilen çift sayıların toplamı = %d\n",toplam); 

    return 0;
}