#include<stdio.h>
int main(){
   //veri tipi dönüşümü : Bir veri tipinin başka bir veri tipine dönüştürülmesi işlemidir.
   // C dilinde veri tipi dönüşümü iki şekilde yapılır: implicit (gizli) ve explicit (açık) dönüşüm.
   // implicit dönüşüm : C dilinde bazı veri tipleri arasında otomatik olarak dönüşüm yapılır.
    // Örneğin, int veri tipi float veri tipine dönüştürülebilir.
    // explicit dönüşüm : C dilinde bazı durumlarda veri tipi dönüşümü açıkça belirtilmelidir.
    // explicit dönüşüm için (veri tipi) ifadesi kullanılır.
    int sayi1 = 10 ;
    float sayi2 = 3.14f ;
    // implicit dönüşüm : int veri tipi float veri tipine dönüştürülür.
    float sonuc1 = sayi1 + sayi2 ;
    // explicit dönüşüm : float veri tipi int veri tipine dönüştürülür.
    int sonuc2 = (int) sayi2 + sayi1;
    printf("Sonuç 1 : %.2f\n", sonuc1);
    printf("Sonuç 2 : %d\n", sonuc2);
    return 0;
}