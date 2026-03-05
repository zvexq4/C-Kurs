#include<stdio.h>
int main(){
    char karakter;
    int kenar,kenar2,alan;
    printf("A - Kare Alanı hesaplama\n");
    printf("B - Dikdörtgen Alanı hesaplama\n");
    printf("C - üçgen Alanı hesaplama\n");
    scanf("%c", &karakter);
    switch (karakter){
        case 'A':           
            printf("kenar uzunluğunu giriniz =\n");
            scanf("%d",&kenar);
            alan = kenar * kenar ;
            printf("Kare alanı = %d\n",alan);
            break;
        case 'B':
            printf("kenar uzunluklarını giriniz =\n");
            scanf("%d%d",&kenar,&kenar2);
            alan = kenar * kenar2;
            printf("Dikdörtgen alanı = %d\n",alan);
            break;
        case 'C':
            printf("kenar uzunluklarını giriniz =\n");
            scanf("%d%d",&kenar,&kenar2);
            alan = (kenar * kenar2)/2;
            printf("Üçgen alanı = %d\n",alan);
            break;
        default:
            printf("Lütfen geçerli bir karakter giriniz.");
            break; 


    }

 
    return 0;
}