#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s1[] = "Merhaba";//dizi
    char const *s2 = "Merhaba";//pinter otomatik conts oldu değişmiyor bundan dolayı const eklicen ki başkası görsün
    printf("Dizi : %s\n",s1);
    printf("pointer : %s\n",s2);
    
    s1[0] = 'X';
    printf("Dizi : %s\n",s1);
    printf("\n------------\n");
    char *s3;
    int boyut;
    printf("Kaç karakter giriceksiniz : ");
    scanf("%d",&boyut);
    getchar();//scanf kulandığımız için fazladan enter karakterini yakalıyoruz
    s3 = malloc(boyut *sizeof(char)+ 1);// null karakteri için 1 adet fazladan byut tahsis ediyoruz
    printf("Metninizi giriniz:");
    fgets(s3,boyut+1,stdin);
    printf("Girilen Metin : %s\n",s3);
    s3[0] = 'Z';
    printf("Güncellenen metin = %s\n", s3);

    return 0;
}
