/*
Mantıksal Operatörler
AND(Ve) &&   : Birden fazla karşılaştırma işleminin doğru olması sonucunda doğru(1) sonucunu döndürür.

OR(Veya) ||  : Birdenfazla karşılaştırma ifadesinden birinin doğru olması sonucunda doğru sonucunu döndürür.

NOT(Değil) ! : İşlemi tersine çevirir. Doğru ise Yanlış, Yanlış ise Doğru yapar.

1. Şart     2.Şart       AND(&&)     OR(||)      NOT(!)
 True        True         True        True     True  -> False
 False       True         False       True     False -> True
 True        False        False       True      
 False       False        False       False
 */

#include <stdio.h>
#include<stdbool.h>

int main () {
    int a = 10, b = 5, c = -6;
    bool sonuc;
    sonuc = a < 0 || c > 0; 
    printf("%d\n", !sonuc);

    return 0;
}
