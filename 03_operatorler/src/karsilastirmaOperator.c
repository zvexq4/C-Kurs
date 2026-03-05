/*
==	Eşit mi?	            x == y	    Eşitse 1, değilse 0
!=	Eşit değil mi?	        x != y	    Farklıysa 1, değilse 0
<	Küçük mü?	            x < y	    Küçükse 1, değilse 0
>	Büyük mü?	            x > y	    Büyükse 1, değilse 0
<=	Küçük veya eşit mi?	    x <= y	    Küçük veya eşitse 1, değilse 0
>=	Büyük veya eşit mi?	    x >= y	    Büyük veya eşitse 1, değilse 0

havaDurumu == Güneşli 
    Pikniğe Git
değilse
    Sinemaya Git

Kullanıcı Adı == Doğru Ve Şifre == doğru(boolean - True(1) veya False(0))
    Sisteme Kabul Edildiniz
değilse
    Sisteme Kabul Edilmediniz. 

 */
#include<stdio.h>
#include<stdbool.h>
int main(){
    bool kosul;
    int a = 10, b = 10 ;
    kosul = a == b; //true yani çıktı 1 olucaktır.
    printf("a koşulu =  %d\n", kosul);
 

    return 0; 
}