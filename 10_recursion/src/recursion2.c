#include<stdio.h>
int faktoryel(int n);//fonksiyon prototipi 

int main(){ // main programın alıştığı bölüm 
    int sonuc;
    sonuc = faktoryel(5); 
    printf("Faktoryel sonucu: %d\n", sonuc);// faktoryel fonksiyonunu çağırarak sonucunu ekrana yazdırır
}

int faktoryel(int n){//fonksiyon yapısı 
    if(n == 1){ // temel durum
        return 1;// temel durum, faktoryel 1'e eşit olduğunda 1 döndürür
    }
    return n * faktoryel(n-1); // rekürsif durum, fonksiyon kendisini çağırıyor

}