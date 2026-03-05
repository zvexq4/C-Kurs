#include<stdio.h>
int main(){ 
    //kulanıcıdan alınan 3 sayının ortalamasını hesaplama
    int sayi1, sayi2, sayi3;
    float ortalama;
    printf("3 adet sayı giriniz = \n");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
    ortalama = (sayi1+sayi2+sayi3)/3.0;
    //yukarıda 3 sayısını 3.0 yazmamızın sebebi floata çevirip işlemin sonucunu float yapmaktır. 
    printf("ortalaması = %.2f\n",ortalama);


    return 0; 
}