#include<stdio.h>
int main(){
    char kr [] = "Bilgisayar"; 
    char kr2 = 'A' ;
    // %c : char veri tipi için kullanılır. Sadece tek bir karakteri temsil eder.
    // %s : char dizisi (string) veri tipi için kullanılır. birden fazla karakteri temsil eder.
    // char dizisi (string) : Karakterlerden oluşan bir dizi. Sonunda null karakteri (\0) bulunur.
    // c dilinde string diye bir veri tipi yoktur. char dizisi (string) kullanılır.
    printf("Karakter : %c\n", kr2);
    printf("Karakter Dizisi : %s", kr);
    return 0;
}