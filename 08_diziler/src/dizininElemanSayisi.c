#include<stdio.h>
int main(){
    int dizi[]={1,2,3,4,5};
    int boyut = sizeof(dizi);
    int elemanSayisi = boyut / sizeof(dizi[0]);//diyerek de yapabiliriz.
    //sizeof operatörünün dizinin eleman sayısını vermesi için dizinin elemanlarının
    //boyutunu bilmemiz gerekiyor. sizeof(dizi) / sizeof(int) ypaparak
    //dizinin eleman sayısını bulabiliriz. sizeof(int) ifadesi int türünün boyutunu verir.
    
    printf("dizinin Eleman sayisi = %d\n",elemanSayisi);
}