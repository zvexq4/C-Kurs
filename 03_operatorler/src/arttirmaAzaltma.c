/*
1. Önceden Artırma (Prefix Increment) - ++x
    Önden artırma operatöründe, değişken önce bir artırılır, ardından bu yeni değeri kullanılır.

2. Sonradan Artırma (Postfix Increment) - x++
    Sondan artırma operatöründe, değişkenin mevcut değeri önce kullanılır, ardından bir artırılır.

3. Önceden Azaltma (Prefix Decrement) - --x
    Önden azaltma operatöründe, değişken önce bir azaltılır, ardından bu yeni değeri kullanılır.

4. Sonradan Azaltma (Postfix Decrement) - x--
    Sondan azaltma operatöründe, değişkenin mevcut değeri önce kullanılır, ardından bir azaltılır.


Bu dört durumda da operatörlerin kullanımı sonucu etkiler. Önden artırma/azaltmada değişken önce değiştirilir, ardından kullanılır. Sondan artırma/azaltmada ise değişken önce kullanılır, sonra değiştirilir. Bu fark, özellikle karmaşık ifadelerde önem taşır.
*/

#include <stdio.h>

int main () {
  /*  int  a = 6, b;
    
    b = a++;

    printf("a: %d\n",a);
    printf("b: %d\n",b);


    int  a = 6, b;
    
    b = a--; //b=6  a=5

    printf("a: %d\n",a);
    printf("b: %d\n",b);

*/


    int a = 10, b = 5, c;
    c = a++ - --b;
    printf("a: %d, b: %d, c: %d",a, b, c);

    return 0;
}