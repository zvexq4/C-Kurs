#include<stdio.h>
int main(){
    //kullanıcıdan celsius değer alıp bunu fahrennheit' a çevirelim.
    //(fahrennheit= celsius*1.8)+32
    float fah;
    int cel;
    printf("celsius sıcaklık değerini giriniz = \n");
    scanf("%d",&cel);
    fah = (cel * 1.8)+32;
    printf("fahrennheit değeri = %.2f\n",fah);

    return 0;
}