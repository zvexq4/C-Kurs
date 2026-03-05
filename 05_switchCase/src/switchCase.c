// switch case yapısı, bir değişkenin farklı değerlerine göre farklı kod bloklarının çalıştırılmasını sağlar.
// switch case yapısı, if-else yapısına göre daha okunabilir ve düzenli bir kod yazmamıza olanak tanır.
// switch case yapısı, sadece tam sayılar, karakterler ve enum türleri için kullanılabilir.
// switch case yapısında, her case bloğu break ifadesi ile sonlandırılmalıdır.
// aksi takdirde, break ifadesi olmayan case blokları birbirini takip eder ve tüm case blokları çalıştırılır.

#include<stdio.h>
int main(){
    int secenek;
    printf("bir sayı giriniz (1-7) = ");
    scanf("%d", &secenek);
    switch (secenek){
        
        case 1:
            printf("Pazartesi\n");
            break;

        case 2:
            printf("salı\n");
            break;

        case 3:
            printf("çarşamba\n");
            break;

        case 4:
            printf("perşembe\n");
            break;

        case 5:
            printf("cuma\n");
            break;

        case 6:
            printf("cumartesi\n");
            break;

        case 7:
            printf("pazar\n");
            break;

        default:
            printf("lütfen geçerli bir sayı giriniz.\n");
    }


    return 0;
}