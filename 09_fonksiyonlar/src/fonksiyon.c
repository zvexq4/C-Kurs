/*
Fonksiyon Nedir ? 
fonksiyonlar belirli bir görevi yerine getirmek için yazılan kod bloklarıdır.
fonksiyonlar programın daha düzenli ve okunabilir olmasını sağlar.
fonksiyonlar tekrar kullanılabilir kod bloklarıdır.
fonksiyonlar programın farklı yerlerinde çağrılabilir ve aynı kodu tekrar yazmak zorunda kalmazsınız.
fonksiyonlar programın daha modüler ve bakımı kolay olmasını sağlar.
Fonksiyonları 4 ana başlıkta inceleyebiliriz.
1- parametre almayan ve değer döndürmeyen fonksiyonlar
2- parametre alan ve değer döndürmeyen fonksiyonlar
3- parametre almayan ve değer döndüren fonksiyonlar
4- parametre alan ve değer döndüren fonksiyonlar
*/
#include<stdio.h>

//selam fonksiyon
void selam(char ad[], int yıl){
    printf("Merhaba %s\n",ad);
    printf("yıl = %d\n",yıl);
}

//faktoryel hesaplıyan fonksiyon
void faktoryel(int sayi){
    int i,fakt = 1;
    for(i=1;i<=sayi;i++){
        fakt *= i;
    }
    printf("%d! = %d\n",sayi,fakt);
}

//fonksiyonlarımı çağırdığım yer
int main(){
    selam("Hamza",2015);
    faktoryel(5);
    return 0;
}