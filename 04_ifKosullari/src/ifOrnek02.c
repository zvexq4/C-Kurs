//girilen yaş bilgisine göre reşitlik kontrol.
#include<stdio.h>
int main(){
    int yas;
    printf("yaşınızı giriniz = ");
    scanf("%d", &yas);
    if(yas >= 18 && yas<100){
       printf("reşitsiniz =)\n");
    }
    else if(yas > 0 && yas < 18){
        printf("reşit değilsiniz =(\n");
    }
    else{
        printf("geçersiz yaş girdiniz\n");
    }
    return 0; 
}