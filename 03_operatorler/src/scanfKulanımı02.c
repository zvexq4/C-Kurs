#include<stdio.h>
int main(){
    char kr;
    char metin[30];// 30 karakterlik bir veri oluşturduk 
    int intSayi;
    float fSayi;
    double dSayi;
    printf("bir karakter giriniz : ");
    scanf("%c", &kr); 

    printf("bir metin giriniz : ");
    scanf(" %[^\n]", metin);
    //scanf("%[^\n]", metin); ifadesi, kullanıcıdan bir metin girişi alırken,
    //kullanıcının Enter tuşuna basana kadar tüm karakterleri okur ve metin değişkenine atar. 
    //fakat kullanırken bir önceki scanf fonksiyonundan sonra bir boşluk bırakmak önemlidir.
    printf("bir tam sayı giriniz :");
    scanf("%d",&intSayi);

    printf("bir ondalıklı sayi giriniz(float) : ");
    scanf("%f", &fSayi);

    printf("bir double sayi giriniz :");
    scanf("%lf",&dSayi);

    printf("karakter: %c\n", kr);
    printf("metin : %s\n", metin);
    printf("integer : %d\n",intSayi);
    printf("float : %f\n", fSayi);

    printf("double : %lf\n",dSayi);

    return 0;
}