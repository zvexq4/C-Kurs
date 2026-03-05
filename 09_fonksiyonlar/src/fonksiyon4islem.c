#include<stdio.h>
int toplam(int sayi1,int sayi2);
int fark(int s1, int s2);
int carpma(int s1,int s2);
float bolme(int s1, int s2);
//yukaridaki satırda fonksiyonun prototipini tanımladık.
//yani imzasını tanımladık. fonksiyonun geri kalanını main den sonra yazabiliriz.
int main(){
    int sayi1,sayi2;
    printf("sayılarınızı giriniz =\n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("Toplam = %d\n",toplam(sayi1,sayi2));
    printf("Farkı = %d\n",fark(sayi1,sayi2));
    printf("Çarpım = %d\n",carpma(sayi1,sayi2));
    printf("Bölme = %.2f\n",bolme(sayi1,sayi2));

    return 0;
}
int toplam(int sayi1,int sayi2){ 
    // aynı değişken isimlerini kullanabiliriz 
    //çünkü bu değişkenler sadece fonksiyonun içinde geçerlidir.
    //main deki sayi1 ve sayi2 ile toplam fonksiyonundaki sayi1 ve sayi2 farklı değişkenlerdir.
return sayi1 + sayi2;
}

int fark(int s1, int s2){
    int fark;
    fark = s1 -s2;
    
    return fark;
}
int carpma(int s1,int s2){
    int carp;
    carp = s1*s2;
    return carp;
}
float bolme(int s1, int s2){
    return (float)s1/s2;
}