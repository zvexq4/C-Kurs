//soru 1 girilen 2 sayının ortalamasını alma 
/*#include<stdio.h>
int main(){
    float sayi1, sayi2,ortalama;
    printf("iki adet sayı giriniz = \n");
    scanf("%f%f",&sayi1,&sayi2);
    ortalama = (sayi1 +sayi2)/2;
    printf("girilen sayıların ortalaması= %.2f\n",ortalama);


    return 0;
} */

//Örnek 2:  Bir kenar uzunluğu ve o kenara ait yüksekliği girilen üçgenin alanını hesaplayın.
#include<stdio.h>
int main(){
    int kenar, yukseklik,alan;
    printf("kenar uzunluğunu giriniz = \n");
    scanf("%d",&kenar);
    printf("yüksekliği giriniz =\n");
    scanf("%d",&yukseklik);
    alan = (kenar * yukseklik)/2;
    printf("alanı = %d?\n",alan);

    return 0;
}