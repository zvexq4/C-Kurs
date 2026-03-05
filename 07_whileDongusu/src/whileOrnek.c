// sıfır girilene kadar girilen sayıları toplayınız
#include<stdio.h>
int main (){
    int sayi,toplam = 0;
    printf("Sayılarınızı giriniz (çıkış için 0 giriniz) = \n");
    while(1){
        scanf("%d",&sayi);
        if(sayi == 0){
            break;
        }
        else{
            toplam += sayi;
        }
    }
     printf("toplam = %d\n",toplam);
     return 0;
}