#include<stdio.h>
int faktoryel(int sayi){
    int i,fakt = 1;
    for(i=1;i<=sayi;i++){
        fakt *= i;
    }
    return fakt;
}

int main(){
    int sonuc;
    sonuc = faktoryel(5) + faktoryel(4) + faktoryel(3);
    printf("%d\n",sonuc);

    return 0;
}