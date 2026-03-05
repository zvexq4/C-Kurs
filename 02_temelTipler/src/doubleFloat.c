#include<stdio.h>
int main(){
    float floatSayi = 3.14159f ;
    double doubleSayi = 3.141592653589793 ;
    // %f : float veri tipi için kullanılır.
    // %lf : double veri tipi için kullanılır.
    // % ile f arasına girilen sayı, ondalık kısmında kaç basamak gösterileceğini belirtir.
    // Örneğin, %.2f ifadesi, ondalık kısmında 2 basamak göstermek için kullanılır.
    //float . dan sonra en fazla 6 basamak gösterebilir.
    //double . dan sonra en fazla 15 basamak gösterebilir.
    printf("Float Sayi : %.2f\n", floatSayi);
    printf("Float Sayi : %f\n", floatSayi);
    printf("Double Sayi : %.15lf\n", doubleSayi); 
    printf("Double Sayi : %lf\n", doubleSayi);

    return 0;
}