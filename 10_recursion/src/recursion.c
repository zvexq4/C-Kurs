/*Rekürsif fonksiyonlar, kendilerini çağıran fonksiyonlardır.
Rekursif fonksiyonlar, genelikle bir poblemi daha küçük alt problemlere bölerek çözerler.
Rekürsif fonksiyonların iki temel bileşeni vardır:
1. Temel Durum (Base Case): Rekürsif çağrıların durmasını sağlayan durumdur.
Bu durum, genellikle problemin en küçük veya en basit halidir.
2. Rekürsif Durum (Recursive Case): Fonksiyonun kendisini çağırdığı durumdur.
Bu durumda, problem daha küçük alt problemlere bölünür ve fonksiyon kendisini bu alt
problemlere uygulayarak çözmeye çalışır.
Rekürsif fonksiyonlar, genellikle daha kısa ve daha okunabilir kod yazmak için kullanılır,
ancak dikkatli kullanılmalıdır çünkü ynalış kulanıldığında sonsuz döngülere veya
bellek taşmalarına neden olabilirler.*/
#include<stdio.h>

int topla(int n){
    if(n == 1){
        return 1;
    }
    return n + topla(n-1);
}


int main(){
    int sonuc = topla(5);
    printf("%d\n",sonuc);
}  