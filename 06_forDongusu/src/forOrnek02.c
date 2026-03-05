// kulanıcının girdiği 5 sayının ortalamasını hesaplıyan programı yazınız.
#include<stdio.h>
int main(){
    int i,sayi,toplam = 0;
    float ort;
    for(i = 1; i<=5;i++){
        printf("%d. sayiyi giriniz = ",i);
        scanf("%d",&sayi);
        toplam += sayi;
    }
    ort = toplam/5.0;
    printf("girilen sayıların ortalaması = %.2f\n ",ort);
    return 0;
}