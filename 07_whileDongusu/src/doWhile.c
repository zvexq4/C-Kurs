/*
do while döngüsü, şart ne olursa olsun en az bir kez çalışabilen bir döngüdür.
Çünkü önce işlemi yapar, sonra koşulu kontrol eder.

do-while döngüsü ne zaman kullanılır ? 
1. en az bir kere çalışması gereken işlemlerde.
2. Kullanıcıdan giriş istenmesi gibi durumlarda.
3. Şartın önceden bilinmediği ama sonradan kontrol edilmesi gerektiği yerlerde.
*/
#include<stdio.h>
int main()
{
    int sayi= 1,toplam = 0;
    do{
        toplam += sayi;
        sayi++;
    }
    while(sayi <= 10 );
    printf("%d\n",toplam);
    
    return 0;
}