#include<stdio.h>
//fonksiyon imzamızı attık.
int mukemmel(int sayi);
int main(){
    int sayi,mukSayiDurumu;
    printf("sayınızı giriniz = ");
    scanf("%d",&sayi);
    mukSayiDurumu = mukemmel(sayi);
    if (mukSayiDurumu == 1){
        printf("%d sayisi Mükemmel sayıdır.\n",sayi);
    }
    else{
        printf("%d sayısı mükemmel DEĞİLDİR.\n",sayi);
    }
    return 0;
}

int mukemmel(int sayi){
    int bolenToplam = 0,i;
    for( i = 1; i <= sayi/2;i++){
        if(sayi % i == 0){
            bolenToplam +=i;
        }
    }
    if(bolenToplam == sayi){
        return 1;
        //sayi mükemmeldir.
    }
    else{
        return 0;
        //sayi sıradandır
    }
}