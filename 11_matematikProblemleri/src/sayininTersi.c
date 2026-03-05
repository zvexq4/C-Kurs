// girilen sayinin tersini yazma 
#include<stdio.h>
int main(){
    int sayi,kalan,yeniSayi = 0;
    printf("bir sayi giriniz = ");
    scanf("%d",&sayi);
    while(sayi > 0){
        kalan = sayi % 10;
        sayi /= 10;
        yeniSayi = yeniSayi * 10 + kalan; 
    }
    printf("%d\n",yeniSayi);
}
/* 2 sonu 0 ile biten sayıları doğal olarak yazmaz çünkü int sayı tipinde
eğer onları yazdırmak istiyorsak string ifade kulanmalıyız. */