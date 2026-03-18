#include<stdio.h>

int main()
{
    char *gunler[7] = {"Pazartesi","Salı","Çarşamba","Perşembe","Cuma","Cumartesi","Pazar"};
    int gun;
    do
    {
        printf("1-7 Arası Sayı giriniz : ");
        scanf("%d",&gun);

    }while(gun <= 0 || gun > 7);
    printf("seçtiğimiz gün : %s\n",gunler[gun-1]);

    return 0;
}
