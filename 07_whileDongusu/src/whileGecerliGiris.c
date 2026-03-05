//Kulanıcı belirlenen aralıktaki sayıları girene kadar devam eden program
#include<stdio.h>
int main()
{
    int sayi;
    printf("0-100 arası bir sayı giriniz = ");
    scanf("%d",&sayi);
    while(sayi < 0 || sayi > 100){
        printf("geçersiz sayı girdiniz tekrar deneyiniz = ");
        scanf("%d",&sayi);
    }
    printf("tebrikler sayınız doğru\n");
}