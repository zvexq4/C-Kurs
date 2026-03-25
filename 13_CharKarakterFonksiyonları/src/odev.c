#include<stdio.h>
#include<ctype.h> // isdigit için
#include<stdlib.h>// atoi için
#include<string.h>// strlen için

int sayiKontrol(char knt[]);//fonksiyon prototibi

int main()
{
    char veri[20];
    int sayi;
    int kontrol;

    printf("Bir Sayi Giriniz :");// kulanıcıdan veri girişi istiyoruz
    scanf("%s",veri);
    
    kontrol = sayiKontrol(veri);//fonksiyon ile kontrol sağlıyoruz
    
    if(kontrol == 1)
    {
        sayi = atoi(veri);
    }
    printf("%d\n",sayi);
    return 0;
}

int sayiKontrol(char knt[])
{
    int uzunluk = strlen(knt);
    for(int i = 0;i < uzunluk; i++)
    {
        if(!isdigit(knt[i]))
        {
            printf("Sayısal veri Değil\n");
            return 0;
        }
    }
    return 1;
}


