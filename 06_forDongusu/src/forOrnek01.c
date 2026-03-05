// kulanıcının girdiği iki sayı aralığındaki sayıların toplamını yapan progrmaı yazınız
#include<stdio.h>
int main(){
    int i,sayi1, sayi2, toplam = 0;
    printf("Başlangıç sayısı = ");
    scanf("%d",&sayi1);
    printf("Bitiş sayısı  = ");
    scanf("%d",&sayi2);   
    for(i = sayi1;i<=sayi2;i++){
        toplam += i;
    }
    printf("cevap = %d\n",toplam);
}