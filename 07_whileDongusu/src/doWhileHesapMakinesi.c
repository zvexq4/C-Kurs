//do-while kulanarak hesap makinesi yapınız ( switch case kulanmadan )
#include<stdio.h>
int main(){
    int sayi1,sayi2,secim;
    do{
        printf("----HESAP MAKİNESİ----\n");
        printf("1.Toplama\n");
        printf("2.Çıkarma\n");
        printf("3.Çarpma\n");
        printf("4.Bölme\n");
        printf("5.Çıkış\n");
        scanf("%d",&secim);
        if(secim >= 1 && secim < 5 ){
            printf("1. sayınızı giriniz = ");
            scanf("%d",&sayi1);
            printf("2. sayınızı giriniz = ");
            scanf("%d",&sayi2);
            if(secim == 1){
                sayi1+=sayi2;
                printf("cevap = %d\n",sayi1);
            }
            else if(secim == 2){
                sayi1 -= sayi2;
                printf("cevap = %d\n",sayi1);
            }
            else if(secim == 3){
                sayi1 *= sayi2;
                 printf("cevap = %d\n",sayi1);
            }
            else{
                if(sayi2 == 0){
                    printf("Sıfıra Bölme hatası\n"); 
                }
                else{
                    float sonuc = sayi1 / (float)sayi2;
                    printf("sonuc = %.2f",sonuc);
                }
            }

        }
        else if(secim == 5){
            printf("Çıkış yapılmıştır.\n");
            break;
        }
        else{
            printf("Hatalı seçim yaptınız. Tekrar deneyiniz\n");
        }
    }while(1);

    return 0;
}