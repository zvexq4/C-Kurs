/*
3 tane eleman sayıları farklı dizi oluşturunuz. Bu dizilere rastgele sayı girecek olan bir 
fonksiyon tanımlayınız. Bu dizileri ekranda yadırıcak olan fonksiyonu oluşturunuz.
ve sonucu ekranda yazdırınız.
*/
#include<stdio.h>
#include<stdlib.h>//srand komutu için import ettik 
#include<time.h>//time komutu için import ettik 

void diziDoldur(int dizi[],int adet);//dizi doldurma fonksiyon prototibi
void diziYazdir(int dizi[],int adet);// dizi yazdırma fonksiyon prototibi
int diziToplam(int dizi[], int adet);// geri değer dödüreceği için int olarak tanımladım
int main()
{
    int dizi1[5],dizi2[7],dizi3[3];
    int toplam = 0;
    srand(time(NULL));// rastgele sayılar kulanabilmek için srand kulanıyoruz
    //time sıfırlıyarak farklı sayıların gelmesini sağlıyoruz
   
    diziDoldur(dizi1,5);// burda dizilerimizi dolduruyoruz
    diziDoldur(dizi2,7);
    diziDoldur(dizi3,3);

    diziYazdir(dizi1,5);// burda dizilerimizi ekrana yazdırıyoruz
    diziYazdir(dizi2,7);
    diziYazdir(dizi3,3);

    toplam = diziToplam(dizi1,5) + diziToplam(dizi2,7) +diziToplam(dizi3,3);
    //dizilerin toplamını bulan fonksiyon
    printf("toplam ==> %d\n",toplam);

    return 0;
}
void diziDoldur(int dizi[],int adet)//dizi doldurma fonksiyonu 
{
    for(int i = 0; i < adet; i++)
    {
        dizi[i] = rand() % 100; // sıfır ile 99 arasında sayı alması için 
    }
}
void diziYazdir(int dizi[],int adet)// dizi yazdirma fonksiyonu
{
    for(int i = 0; i < adet;i++)
    {
        printf("%d  ",dizi[i]);
    }
    printf("\n------------------\n");
}
int diziToplam(int dizi[],int adet)
{
    int toplam = 0;
    for(int i = 0; i < adet;i++)
    {
        toplam += dizi[i];//topla = topla + dizi[i]
    }
    return toplam;
}//topla = topla + dizi[i]
