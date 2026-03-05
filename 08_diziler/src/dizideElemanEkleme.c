#include<stdio.h>
int main(){
    int dizi[20]={10,20,30,40,50,60};
    int boyut = 6;
    int yeniEleman, index,flag = 0;

    printf("---Dizinin İlk Hali---\n");
    for(int i = 0;i < boyut;i++){
        printf("-%d",dizi[i]);
    }
    printf("\n\n");

    printf("ekliceğinşz elemanı giriniz = ");
    scanf("%d",&yeniEleman);
    printf("index numarasını giriniz = ");
    scanf("%d",&index);
    do{//index numarası 0 ile boyut arasında olmalı
    if(index >= 0 && index <= boyut && boyut < 20){//index numarası geçerli ise
        flag = 1;
        for(int i = boyut;i > index;i--){
            dizi[i] = dizi[i-1];//index numarasına kadar olan elemanları bir sağa kaydırıyoruz
        }
        dizi[index] = yeniEleman;//yeni elemanı index numarasına ekliyoruz
        boyut++;//dizinin boyutunu bir arttırıyoruz
        printf("---Dizinin Yeni Hali---\n");
            for(int i = 0;i < boyut;i++){
                printf("-%d",dizi[i]);
             }
             printf("\n\n");
         }
    
    else{//index numarası geçerli değilse kullanıcıdan tekrar girmesini istiyoruz
        printf("lütfen geçerli bir index numarası giriniz = ");
        scanf("%d",&index);
    }
    }while(flag == 0);
    return 0;
}