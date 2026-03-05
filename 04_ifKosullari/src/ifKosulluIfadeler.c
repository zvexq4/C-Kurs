/*

if yapısının kullanım amacı, programın belirli koşullar altında farklı davranışlar sergilemesini sağlamaktır. Başka bir deyişle, bir durumun veya koşulun doğruluğunu kontrol ederek, programın o duruma uygun bir şekilde nasıl hareket edeceğini belirler. Bu sayede, program içerisinde dinamik kararlar alınabilir ve farklı kod blokları koşullara bağlı olarak çalıştırılabilir.

*/
#include <stdio.h>

int main()
{
    int ogrNot;
    printf("Bir Not Giriniz:");
    scanf("%d", &ogrNot);
    /*
    if(sayi > 0){
        printf("Pozitif");
    }
    if(sayi < 0){
        printf("Negatif");
    }
    if(sayi == 0){
        printf("Sifir");
    }
*/
    /*
        if(sayi % 2 == 0){
            printf("Sayiniz Cift");
        }
        if(sayi % 2 == 1){
            printf("Sayiniz Tek");
        }

        */

    /*
       0-44 > 1   sayi > 0 && sayi <= 44  1
       45-54 >2   sayi >= 45 && sayi <=54 2
       55-69 > 3
       70-84 > 4
       85-100> 5
       */
    if (ogrNot >= 0 && ogrNot <= 44)
    {
        printf("1\n");
    }
    else if (ogrNot >= 45 && ogrNot <= 54)
    {
        printf("2\n");
    }
    else if (ogrNot >= 55 && ogrNot <= 69)
    {
        printf("3\n");
    }
    else if (ogrNot >= 70 && ogrNot <= 84)
    {
        printf("4\n");
    }
    else if (ogrNot >= 85 && ogrNot <= 100)
    {
        printf("5\n");
    }
    else 
    {
        printf("Gecersiz Not girdiniz");
    }


   
    return 0;
}