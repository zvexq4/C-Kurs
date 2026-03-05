#include<stdio.h>
int main(){
    int yil;
    printf("yıl giriniz = ");
    scanf("%d",&yil);
    if((yil % 4 == 0 && yil % 100 != 0 )||(yil % 400 == 0)){
        printf("%d artık Yıldır\n",yil);
    }
    else{
        printf("%d artık yıl değildir\n",yil);
    }
}