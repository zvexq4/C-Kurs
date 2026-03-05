#include<stdio.h>
#include<math.h>
int main(){
    int sayi1, sayi2, toplam, fark, carpım;
    float bolum, karekok, us;
    printf("iki adet sayı giriniz :\n");
    scanf("%d%d", &sayi1,&sayi2);
    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpım = sayi1 * sayi2;
    bolum = (float)sayi1 / sayi2;
    //burda float türüne dönüştürme yaparak bölme işlemi sonucunun ondalıklı bir sayı
    // olmasını sağlıyoruz. Eğer sayi1 ve sayi2 tam sayı olarak kalırsa,
    //bölme işlemi sonucunda tam sayı bölmesi yapılır ve sonuç tam sayı olurdu. 
    us = pow(sayi1, sayi2);
    //pow fonksiyonu, bir sayının belirli bir üsse yükseltilmiş halini hesaplamak için kullanılır.
    //pow fonksiyonunu kulanabilmek için math.h kütüphanesini dahil etmemiz gerekir.
    karekok = sqrt(sayi1); 
    //sqrt fonksiyonu, bir sayının karekökünü hesaplamak için kullanılır.
    //sqrt fonksiyonunu kulanabilmek için math.h kütüphanesini dahil etmemiz gerekir.
    printf("toplam = %d\n",toplam);
    printf("fark = %d\n",fark);
    printf("çarpım = %d\n",carpım);
    printf("bölüm = % f\n", bolum);
    printf("us = %f\n",us);
    printf("ilk sayının karekökü = %f\n", karekok);


    return 0;
}