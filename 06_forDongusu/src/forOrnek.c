/* kulanıcının girmiş olduğu n sayısına kadar 1 den başlıyarak sayıları toplayan ve çarpan 
programı yazınız */
#include<stdio.h>
int main(){
    int i, sayi, toplam = 0, carpm = 1;
    printf("bir sayı giriniz = ");
    scanf("%d",&sayi);
    for(i = 1; i <= sayi;i++){
        toplam += i;
        carpm *= i;
    }
    printf("Toplamı = %d\n",toplam);
    printf("Çarpımı = %d\n",carpm);
    return 0;
}