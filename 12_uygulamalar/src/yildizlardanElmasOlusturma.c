#include<stdio.h>
int main(){
    int satir,bosluk,karakter,sayi;
    printf("satır sayinizi giriniz = ");
    scanf("%d",&sayi);
    //satır sayısını belirtir 
    for(satir = 1; satir <= sayi; satir++)
    {
        //boşluk sayısını belirtir
        for(bosluk = 1; bosluk <= sayi - satir;bosluk++ )
        {
            printf(" ");
        }
        //karakter sayisini belirtir
        for(karakter = 1; karakter <= 2*satir-1;karakter++){
            printf("*");
        }
        printf("\n");
    }
    for(satir = sayi-1; satir >= 1; satir--)
    {
        //boşluk sayısını belirtir
        for(bosluk = 1; bosluk <= sayi - satir;bosluk++ )
        {
            printf(" ");
        }
        //karakter sayisini belirtir
        for(karakter = 1; karakter <= 2*satir-1;karakter++){
            printf("*");
        }
        printf("\n");
    }

}