#include<stdio.h>
int main(){
    // = atama
    // += atama ve artırma
    // -= atama ve azaltma
    // *= atama ve çarpma
    // /= atama ve bölme
    // %= atama ve mod alma
    int   a = 10, b =7, c = 13, d = 21,e = 15;
    // a = a + 5
    a += 5;
    printf("atama ve artırma değeri = %d\n",a); 

    // b = b - 2
    b -= 2;
    printf("atama ve azaltma değeri = %d\n",b);

    // c = c * 3
    c *= 3;
    printf("atama ve çarpma değeri = %d\n",c);

    //d = d / 3
    d /= 3;
    printf("atama ve bölme değeri = %d\n",d);

    // e = e % 6
    e %= 6;
    printf("atama ve mod alma değeri = %d\n",e); 

    return 0;
} 