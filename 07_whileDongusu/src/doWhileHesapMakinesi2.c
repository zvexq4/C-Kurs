//do-while kullanarak hesap makinesi yapınız (switch case)
#include<stdio.h>
int main(){
    int secim, sayi1,sayi2;
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
        }
        switch (secim)
        {
        case 1:
            printf("sonuc =  %d\n",sayi1 + sayi2);
            break;
        case 2:
            printf("sonuc =  %d\n",sayi1 - sayi2);
            break;
         case 3:
            printf("sonuc =  %d\n",sayi1 * sayi2);
            break;
         case 4:
            printf("sonuc = %.2f\n",sayi1 / (float)sayi2);
            break;
         case 5:
            printf("çıkış yaptınız..");
            
            break;

        default:
            printf("yanlış seçim yaptınız.\n");
            break;
        }
       
    }while(secim != 5);

    return 0;
}


