//kulanıcıdan sayı alınıcak 1 den başlayıp o sayıya kadar 3 ve 5 e tam bölünen sayılar yazdırılıcak
#include<stdio.h>
int main(){
    int sayi, i,flag = 0;
    printf("bir sayi giriniz = ");
    scanf("%d",&sayi);
    printf("-----------------------\n");
    for(i = 1; i <= sayi; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("bölünen sayılar ==> %d\n",i);
            flag = 1;
        }
    }
    if(flag == 0){
        printf("girilen sayıda 5 ve 3 e kadar bölünen sayı yoktur\n");
    }
} 